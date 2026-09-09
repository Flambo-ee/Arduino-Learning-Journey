int redLed1 =13;
int redLed2 =12;
int redLed3 =10;
int redLed4 =9;
int waiting =750;



void setup() {

pinMode(redLed1,OUTPUT);
pinMode(redLed2,OUTPUT);
pinMode(redLed3,OUTPUT);
pinMode(redLed4,OUTPUT);



}

void loop() {
  //Number 0
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //1 - 0001
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //2 - 0010
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //3 - 0011
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //4 - 0100
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //5 - 0101
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //6 - 0110
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //7 - 0111
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,LOW);
  delay(waiting);
  //8 - 1000
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //9 - 1001
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //10 - 1010
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //11 - 1011
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,LOW);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //12 - 1100
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //13 - 1101
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,LOW);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //14 - 1110
  digitalWrite(redLed1,LOW);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  //15 - 1111
  digitalWrite(redLed1,HIGH);
  digitalWrite(redLed2,HIGH);
  digitalWrite(redLed3,HIGH);
  digitalWrite(redLed4,HIGH);
  delay(waiting);
  

}
