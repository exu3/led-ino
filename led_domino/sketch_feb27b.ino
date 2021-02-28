int blink = 100; //delay value in milleseconds

void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // LEDs blink one at a time going in order down the row
  digitalWrite(4, HIGH);
  delay(blink);
  digitalWrite(4, LOW);
  delay(blink);
  
  digitalWrite(6,HIGH);
  delay(blink);
  digitalWrite(6,LOW);
  delay(blink);

  digitalWrite(7,HIGH);
  delay(blink);
  digitalWrite(7,LOW);
  delay(blink);

  digitalWrite(8,HIGH);
  delay(blink);
  digitalWrite(8,LOW);
  delay(blink);

  digitalWrite(9,HIGH);
  delay(blink);
  digitalWrite(9,LOW);
  delay(blink);

  digitalWrite(10,HIGH);
  delay(blink);
  digitalWrite(10,LOW);
  delay(blink);

  digitalWrite(11,HIGH);
  delay(blink);
  digitalWrite(11,LOW);
  delay(blink);

  digitalWrite(12,HIGH);
  delay(blink);
  digitalWrite(12,LOW);
  delay(blink);
}
