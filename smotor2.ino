#include <Servo.h>
int servop = 9;
int switchP = 2;
int beepP =11;

Servo servo1;


void setup() {
  servo1.attach(servop);
  pinMode(switchP, INPUT_PULLUP);
  pinMode(beepP, OUTPUT);
}

void loop() {
SetServoMotor(digitalRead(switchP));

}

void SetServoMotor(boolean reverse){

  if(reverse){
servo1.write(90);
  for(int stepper =0; stepper<120; stepper++){
 
  analogWrite(beepP,stepper);
   delay(300);
   if(stepper ==120){
      for(int stepper =120; stepper>0; stepper--){
 
       analogWrite(beepP,stepper);
      delay(300);}//end for
    
   }//end if
  }//end for
  }else{
    servo1.write(0);
      analogWrite(beepP,0);
    
    }//end else 
}//end SetServoMotor
