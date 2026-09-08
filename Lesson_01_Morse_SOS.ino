int redLed=13;
int dot =150; // Short blink for dot
int dash=450; // Long blink for dash





void setup() {

pinMode(redLed,OUTPUT); 

}

void loop() {
// Letter 'S' - 3x Dots
digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);

digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);

digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);
// Letter 'O' - 3x Dashes
digitalWrite(redLed,HIGH);
delay(dash);
digitalWrite(redLed,LOW);
delay(dash);

digitalWrite(redLed,HIGH);
delay(dash);
digitalWrite(redLed,LOW);
delay(dash);

digitalWrite(redLed,HIGH);
delay(dash);
digitalWrite(redLed,LOW);
delay(dash);
// Letter 'S' - 3x Dots
digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);

digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);

digitalWrite(redLed,HIGH);
delay(dot);
digitalWrite(redLed,LOW);
delay(dot);

delay(1250);



}
