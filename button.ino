int led = D7;
int buttonPin = D6;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(led, OUTPUT); 
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  digitalWrite(led,LOW);
  if (buttonState == HIGH) {
    Particle.publish("buttonPressed"); // display "buttonPressed"
    digitalWrite(led,HIGH); // turns LED on
    delay(1000); // turns on for 1000 mili seconds = 1 second
    digitalWrite(led,LOW);  // turns LED off
    delay(1000); // wait 1 second
  }
  if (buttonState == LOW) {
    Particle.publish("buttonNotPressed"); //
    delay(1000); 
  }  
}
