///Creating the variables and assigning the pins to them
int REDPIN = 13;
int YELLOWPIN = 12;
int GREENPIN = 11;

void setup() {
  //setting the pins to output pins usinfg pinMode
  pinMode(REDPIN, OUTPUT);
  pinMode(YELLOWPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);

}

void loop() {
  // making the leds blink in turn;
  //turn on red, and turn of yellow and green

  digitalWrite(REDPIN,HIGH);
  digitalWrite(YELLOWPIN,LOW);
  digitalWrite(GREENPIN,LOW);
  delay(3000);

  //turn on yellow, and turn of red and green

  digitalWrite(REDPIN,LOW);
  digitalWrite(YELLOWPIN,HIGH);
  digitalWrite(GREENPIN,LOW);
  delay(2000);

  //turn on green, and turn of yellow and red

  digitalWrite(REDPIN,LOW);
  digitalWrite(YELLOWPIN,LOW);
  digitalWrite(GREENPIN,HIGH);
  delay(5000);

}
