// HRTE PROJECTS
//CREATED BY UCHITHA INDURANGA XD
  
  #include <Servo.h>

  Servo servo1; 
  Servo servo2; 
  

  int potpin = 0;  
  int val;    

  void setup() {
  servo1.attach(2); 
  servo2.attach(3); 
  
}
 
  void loop() {
  val = analogRead(potpin);          
  val = map(val, 0, 1023, 1, 1000);
                 
  servo1.write(30);
  servo2.write(60);
  delay(val);
  servo1.write(50);
  servo2.write(40);
  delay(val);
  
}
