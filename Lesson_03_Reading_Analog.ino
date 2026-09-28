int  pinDivider =A1;
int waiting =250;
void setup() {
  
pinMode(pinDivider,INPUT);
Serial.begin(9600);
}

void loop() {
  
int divider = analogRead(pinDivider);
float v2 = 5.0*divider/1023.0;
Serial.println(v2);
delay(waiting);
}
