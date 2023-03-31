int speakerPin = 9; // connect speaker to digital pin 9

void setup() {

  pinMode(speakerPin, OUTPUT); // set the speaker pin as an output

}

void loop() {

  // generate a 1 kHz tone for 1 second

  tone(speakerPin, 500, 1000);

  delay(1000); // wait for 1 second

}
