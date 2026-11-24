int redPin=10;
int buttonOld=1;
int buttonNew;
int ledState=0;

void setup() {
  
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(A1,INPUT);
}

void loop() {
  
  buttonNew=digitalRead(A1);
  Serial.println(buttonNew);
  if (buttonOld==0 && buttonNew==1) {
    if(ledState==0){
      digitalWrite(redPin,HIGH);
      ledState=1;
    }
    else {
      digitalWrite(redPin,LOW);
      ledState=0;
    }
  }
buttonOld=buttonNew;
}
