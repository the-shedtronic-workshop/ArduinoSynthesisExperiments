int speakerPin = 9; // connect speaker to digital pin 9

void setup() {

  pinMode(speakerPin, OUTPUT); // set the speaker pin as an output

}

void loop() {

  // generate a 1 kHz tone with 50% duty cycle (i.e., a 50% PWM signal)

  analogWrite(speakerPin, 127);

  delay(10); // wait for 500 milliseconds

  analogWrite(speakerPin, 0); // turn off the tone

  delay(20); // wait for another 500 milliseconds

}
