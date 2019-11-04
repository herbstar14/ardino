int LED =9;
int BUTTON =2;



int del = 45;
void setup() {
pinMode(BUTTON,INPUT);
pinMode(LED,OUTPUT);

}//end setup

void loop() {
if(digitalRead(BUTTON) == LOW){
  digitalWrite(LED,LOW);
  
}//end if
else{
  digitalWrite(LED,HIGH);
  delay(del);
  digitalWrite(LED,LOW);
  delay(del);
  digitalWrite(LED,HIGH);
  delay(del);
  digitalWrite(LED,LOW);
  delay(del);
  digitalWrite(LED,HIGH);
  delay(del);
  
  }//end else



}
