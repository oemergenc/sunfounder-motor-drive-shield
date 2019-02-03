#include <Arduino.h>
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup(){
    int speed = 0;
    motor1.setSpeed(speed); 
    motor2.setSpeed(speed); 
    motor3.setSpeed(speed); 
    motor4.setSpeed(speed); 
}
     
void loop()
{
    motor1.run(FORWARD); // and change this function to .run(FORWARD)
    motor2.run(FORWARD); // and change this function to .run(FORWARD)
    motor3.run(FORWARD); // and change this function to .run(FORWARD)
    motor4.run(FORWARD); // and change this function to .run(FORWARD)
}