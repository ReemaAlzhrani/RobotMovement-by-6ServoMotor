# ROBOT MOVEMENT BY 6 SERVO MOTORS :
Algorithm for Connecting and Programming a Circuit with 6 Servo Motors and Simulating Robot Walking Motion including pseducode 

# MOVEMENT 
First 3 sevros represent joints of robot left legs ( hips - knee - ankle ) 
the rest servos repersent joints of robot right leg 

 Leg movement based on these photos : 
 ![aq](https://github.com/ReemaAlzhrani/RobotMovement-by-6ServoMotor/assets/154990107/36e556a8-cb39-4805-984e-dc9e64133a67)

![bq](https://github.com/ReemaAlzhrani/RobotMovement-by-6ServoMotor/assets/154990107/8a2eab84-c6eb-4b34-9feb-2798d9bd501c)
so :
lowering the hip we need smaller angle // larger angle to lift the hip 
strating the knees we need 90 degrees angle // greater than 90 degrees to bend it 
pointing the foot by the ankle we need greater //lefting it with angle less then 90 degrees 

# Circle 

![six servos](https://github.com/ReemaAlzhrani/RobotMovement-by-6ServoMotor/assets/154990107/724cc907-b9f3-43bc-a9b3-8f3a867ce585)

[Arduino Circut 6servos.pdf](https://github.com/user-attachments/files/16077002/Arduino.Circut.6servos.pdf)




## pseducode 

// 1- INTIALIZATION :
intialize servo1 , servo2 , servo3 , servo4 , servo5 , servo6 

//2-  attach servos to pins 
attach servo1 to pin 3
attach servo2 to pin 4
attach servo3 to pin 5
attach servo4 to pin 6
attach servo5 to pin 7
attach servo6 to pin 8

//3- define function MoveServos

function moveServos(angle1, angle2 ,angle3 ,angle4 ,angle5 ,angle6)
set servo1 to angle1
set servo2 to angle2
set servo3 to angle3
set servo4 to angle4
set servo5 to angle5
set servo6 to angle6
delay for 100 sec to allow movement 

// 4- define function walkingCycle :
1- calling moveServos(30, 60, 90, 60, 90, 90)
delay to 100 millisecond
2- calling moveServos(0 , 100 , 120 , 140 ,90,45)
delay to 100 millisecond
3- calling moveServos(45, 60, 75, 60, 105, 90)
delay to 100 millisecond
4- calling moveServos(30, 60, 90, 60, 90, 90)
delay to 100 millisecond
5- calling moveServos(0 , 100 , 120 , 140 ,90,45)
delay to 100 millisecond
6- calling moveServos(45, 60, 75, 60, 105, 90)
delay to 100 millisecond

end function 
