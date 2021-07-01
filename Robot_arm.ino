#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int potpin1 = 0;
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;
int potpin5 = 4;

int vall;
int val2;
int val3;
int val4;
int val5;

void setup() {
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(8);
  servo5.attach(7);
}

void loop() {
  vall = analogRead(potpin1);
  vall = map(vall, 0, 1023, 0, 180);
  servo1.write(vall);
  delay(15);
  
  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 180);
  servo2.write(val2);
  delay(15);
  
  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 0, 180);
  servo3.write(val3);
  delay(15);
  
  val4 = analogRead(potpin4);
  val4 = map(val4, 0, 1023, 0, 180);
  servo4.write(val4);
  delay(15);
  
  val5 = analogRead(potpin5);
  val5 = map(val5, 0, 1023, 0, 180);
  servo5.write(val5);
  delay(15);
}
