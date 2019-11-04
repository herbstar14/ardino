int white =9;
int blue =10;
int green=11;
int button = 2;



void setup() {
pinMode(button,INPUT_PULLUP);
pinMode(white, OUTPUT); 
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
 if(digitalRead(button) == LOW){
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  
 }else{
    digitalWrite(white, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  }

}
