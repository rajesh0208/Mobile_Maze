
#include<SoftwareSerial.h>
#include<Servo.h>
Servo myservoR,myservoP;
int bluetoothTx=10;
int bluetoothRx=11;
int roll;
int pitch;
int rst=1;
int count=1;
SoftwareSerial bluetooth(bluetoothTx,bluetoothRx);
void setup()
{
 //pinMode(dum, OUTPUT);
   myservoR.attach(9);
   myservoP.attach(5);
   myservoR.write(90);
   myservoP.write(90);
   Serial.begin(9600);
   bluetooth.begin(9600);
   delay(2000);
   rst=1;
}
void loop()
{
  
 if(bluetooth.available()>0)
 {
    uint16_t data = (bluetooth.read()<<8 | bluetooth.read());
    count=count+1;
    count = count%100;
    roll =data/256 ;
    pitch = data%256;
         
//    if(count==0)
   { 
//    uint16_t data = (bluetooth.read()<<8 | bluetooth.read());
      Serial.print("data : ");
      Serial.print(data);
      Serial.print(" <---> [roll : ");
      
      if(roll<127) 
        Serial.print(roll);
      else 
        Serial.print(-(255-roll));
      Serial.print("    pitch : ");
      if(pitch<127) 
        Serial.print(pitch);
      else 
        Serial.print(-(255-pitch));
      Serial.println("]");
  
      if (roll<100) 
        myservoR.write(90+roll);
      else if(roll>127) 
        myservoR.write(90-(255-roll));
      else 
        myservoR.write(90);


      if(pitch<100) 
        myservoP.write(90+pitch);
      else if(pitch>127) 
        myservoP.write(90-(255-pitch));
      else 
        myservoP.write(90);
   }
   delay(50);
 }
 
}
