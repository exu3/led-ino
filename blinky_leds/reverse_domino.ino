int blink = 50; //delay value in milleseconds for first domino sequence
int invertedBlink = 200; //delay for inside out pattern

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
  
  digitalWrite(6,HIGH);
  delay(blink);

  digitalWrite(7,HIGH);
  delay(blink);

  digitalWrite(8,HIGH);
  delay(blink);
  
  digitalWrite(9,HIGH);
  delay(blink);

  digitalWrite(10,HIGH);
  delay(blink);

  digitalWrite(11,HIGH);
  delay(blink);

  digitalWrite(12,HIGH);
  delay(blink);

  //going back
  digitalWrite(12, HIGH);
  delay(blink);
  digitalWrite(12, LOW);
  delay(blink);
  
  digitalWrite(11,HIGH);
  delay(blink);
  digitalWrite(11,LOW);
  delay(blink);

  digitalWrite(10,HIGH);
  delay(blink);
  digitalWrite(10,LOW);
  delay(blink);

  digitalWrite(9,HIGH);
  delay(blink);
  digitalWrite(9,LOW);
  delay(blink);

  digitalWrite(8,HIGH);
  delay(blink);
  digitalWrite(8,LOW);
  delay(blink);

  digitalWrite(7,HIGH);
  delay(blink);
  digitalWrite(7,LOW);
  delay(blink);

  digitalWrite(6,HIGH);
  delay(blink);
  digitalWrite(6,LOW);
  delay(blink);

  digitalWrite(4,HIGH);
  delay(blink);
  digitalWrite(4,LOW);
  delay(500); //end reverse domino

  //all LEDs light up at once
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);

  //begin staggering lights
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(500);

  //copy next 4 blocks to repeat
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(500);

  //repeat 2
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(500);

  //repeat 3
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(500);

  //repeat 4
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  
  //lighting up from inside to outside LEDS
  //to begin, all leds turn off
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(100);
  
  //lighting up from inside to outside
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(invertedBlink);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(10);

  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(invertedBlink);

  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  delay(10);

  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  delay(invertedBlink);

  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(10);

  digitalWrite(4, HIGH);
  digitalWrite(12, HIGH);
  delay(invertedBlink);

  digitalWrite(4, LOW);
  digitalWrite(12, LOW);
  delay(10);

  //lighting up from inside to outside LEDS
  //to begin, all leds turn off
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(100);
  
  //lighting up from inside to outside
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(invertedBlink);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(10);

  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(invertedBlink);

  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  delay(10);

  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  delay(invertedBlink);

  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(10);

  digitalWrite(4, HIGH);
  digitalWrite(12, HIGH);
  delay(invertedBlink);

  digitalWrite(4, LOW);
  digitalWrite(12, LOW);
  delay(10);

  //lighting up from inside to outside LEDS
  //to begin, all leds turn off
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(100);
  
  //lighting up from inside to outside
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(invertedBlink);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(10);

  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(invertedBlink);

  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  delay(10);

  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  delay(invertedBlink);

  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(10);

  digitalWrite(4, HIGH);
  digitalWrite(12, HIGH);
  delay(invertedBlink);

  digitalWrite(4, LOW);
  digitalWrite(12, LOW);
  delay(10);

}
