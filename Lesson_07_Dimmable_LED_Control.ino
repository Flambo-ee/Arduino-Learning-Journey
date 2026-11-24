int redPin=10;
int buttonPin1=A1;
int buttonPin2=A2;
int ledBright=0;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int button1Val=digitalRead(buttonPin1);
 int button2Val=digitalRead(buttonPin2);
Serial.print("first button = ");
Serial.print(button1Val);
Serial.print(" second button = ");
Serial.println(button2Val);
delay(100);

if(button1Val==0){
  ledBright=ledBright+20;
}
if(button2Val==0){
  ledBright=ledBright-20;

}
if(ledBright>255){
  ledBright=255;
}
if(ledBright<0){
  ledBright=0;
}
analogWrite(redPin,ledBright);
}
