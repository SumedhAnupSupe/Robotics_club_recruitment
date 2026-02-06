const int light = 8;      // light connected to pin 8
const int button = 7;  // button connected to pin 7

void setup() {
  pinMode(light, OUTPUT);
  pinMode(button, INPUT_PULLUP); 
}

void loop() {
  int buttonState = digitalRead(button);

  if (buttonState == HIGH) {
  digitalWrite(light, LOW);   
  } else {
   digitalWrite(light,LOW);
  delay(1000);
  digitalWrite(light,HIGH);
  delay(1000);    
  }
  
}