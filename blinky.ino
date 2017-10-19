int led = D7;

void setup(){
	pinMode(led,OUTPUT);
}
void loop(){
    digitalWrite(led, HIGH); //turn LED on
    delay(1000); // wait 1 sec
    digitalWrite(led, LOW); // turn LED off
    delay(1000); // wait another second
}
