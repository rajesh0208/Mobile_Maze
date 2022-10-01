# Mobile-Maze

# [Electronics Club IITG Project](https://www.iitg.ac.in/stud/gymkhana/technical/home/ElectronicsHome.html)

# Overview 
- Mobile Maze Game uses Arduino to create a balanced maze toy that uses Bluetooth to connect the phone to control the angle of the maze and navigates the ball to reach the portal at the end to win the game.

# Introduction 
- The idea of the game is to navigate the marble through the maze to reach the portal at the end to win the game. 
- Mobile Maze is a game of physical skill consisting of a box with a maze on top , and a marble . 
- The object of the game is to try to tilt the play field to guide the marble to the end of the maze. 
- The game was developed by BRIO in Sweden and first released there in 1946.

# Methodology
- The Android device data from gyroscope and accelerometer  is transmitted  through the bluetooth connection to the Arduino which controls the servos that tilt the maze. 
- On the Android side the application is created with MIT App Inventor 2 and on the Arduino side the Arduino IDE is used. 
- The app that we created will capture the data (roll angle and pitch angle) from the orientation sensor and transmits the same to Arduino via Bluetooth.This data is then used to determine the orientation of the mobile.

# Results
- The orientation sensor is software-based and derives its data from the accelerometer and the geomagnetic field sensor. And thus the orientation of mobile phone is directly obtained from this sensor in terms of roll and pitch.
- Transmission of sensor data i.e roll and pitch via bluetooth is successfully done by encoding both the values into a single 16-bit data bus which is later decoded in the arduino to retrieve corresponding values to increase the efficiency of transmission.

# [Project Demo](https://youtu.be/2mKjhqgsOCc)

# Conclusion 
- The delay in the motion of the maze is majorly due to the speed restriction of servo motor. Though the sensor data can be transmitted at higher rate, the servo couldn’t change its position quick.

# References
- [Creation of app](https://www.youtube.com/watch?v=pR2rTRDZ_-Y)  

  
