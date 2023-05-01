#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  delay(5000);
}

void loop() {
    myservo.writeMicroseconds(1000);         // tell servo to go to position in variable 'pos'
    delay(2000);
    myservo.write(1500);          // tell servo to go to position in variable 'pos'
    delay(2000);
     myservo.write(2000);          // tell servo to go to position in variable 'pos'
    delay(2000);

}
