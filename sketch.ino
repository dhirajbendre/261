#include <ESP32Servo.h>
Servo myservo;
int pos = 0;
void setup() {
  
  Serial.begin(115200);
  
  myservo.attach(27);
}
void loop() {
  for( pos = 0; pos <=180; pos+= 1){
    myservo.write(pos); 
    delay(15);
  }

  for(pos=180; pos>=0; pos -= 1){
    myservo.write(pos);
    delay(10);
  }
  // put your main code here, to run repeatedly:
   // this speeds up the simulation
}
