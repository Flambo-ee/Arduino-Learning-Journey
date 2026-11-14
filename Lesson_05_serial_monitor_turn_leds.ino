String msg="which Led do you want to turn on? ";
String msg2= "ok turning on ";
String TheColor;

String yellow;
int redPin=13;
int bluePin=9;
int greenPin=11;
int yellowPin=12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(yellowPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0) {
}
TheColor=Serial.readString();
  if (TheColor=="red") {
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);



}
if (TheColor=="green") {
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,LOW);


}
if (TheColor=="blue") {
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
}
if (TheColor=="yellow") {
  digitalWrite(yellowPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
Serial.print(msg2);
Serial.println(TheColor);
delay(500);


}
