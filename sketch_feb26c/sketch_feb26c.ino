int redLED=8;
int yellowLED=13;
int greenLED=10;

int dit=250; //short delay
int dah=700; //long delay
int longWait=2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(yellowLED,HIGH);
  delay(dit);
  digitalWrite(yellowLED,LOW);
  delay(dah);

  digitalWrite(greenLED,HIGH);
  delay(dit);
  digitalWrite(greenLED,LOW);
  delay(dah);
}
