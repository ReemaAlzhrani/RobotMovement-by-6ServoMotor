#include <Servo.h>

// define servos :
Servo servo1 , servo2 ,servo3 , servo4 , servo5 , servo6;


void setup() {
 // attach servos to pins :
servo1.attach(3);
servo2.attach(4);
servo3.attach(5);
servo4.attach(6);
servo5.attach(7);
servo6.attach(8);
}
void moveServos(int angle1, int angle2, int angle3, int angle4, int angle5, int angle6) {
  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);
  servo5.write(angle5);
  servo6.write(angle6);
  delay(50); 
}
void walkCycle() {
// lift left leg forward
  moveServos(30, 60, 90, 60, 90, 90 );
  delay(100);

  // move left leg forward
  moveServos(0 , 100 , 120 , 140 ,90,45);
  delay(100);

  // اlower the left leg forward 
  moveServos(45, 60, 75, 60, 105, 90);
  delay(100);

  // lift the right leg forward 
  moveServos(30, 60, 90, 60, 90, 90);
  delay(100);

  // lower the right leg forward 
  moveServos(90 , 100 , 120 , 140 ,90,45);
  delay(100);

  // 
  moveServos(45, 60, 75, 60, 105, 90);
  delay(10);
}
void loop() {
   walkCycle(); 


}
