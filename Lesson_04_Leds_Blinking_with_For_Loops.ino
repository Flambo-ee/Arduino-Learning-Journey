int redPin=9;
int yellowPin=6;
int bluePin=10;
int delayT=100;
int redTimes=9;
int yellowTimes=6;
int blueTimes=10;

 void setup() {
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(bluePin,OUTPUT);


}
 void loop() {
for(int j=0;j<yellowTimes;j=j+1) {
digitalWrite(yellowPin,HIGH);
delay(delayT);
digitalWrite(yellowPin,LOW);
delay(delayT);
 }
for(int j=0;j<redTimes;j=j+1) {
digitalWrite(redPin,HIGH);
delay(delayT);
digitalWrite(redPin,LOW);
delay(delayT);
}
for(int j=0;j<blueTimes;j=j+1) {
digitalWrite(bluePin,HIGH);
delay(delayT);
digitalWrite(bluePin,LOW);
delay(delayT);
}
 }