int speakerPin = 9; // connect speaker to digital pin 9

unsigned long halfPeriod = 500; // set the half-period (in microseconds)

void setup() {

  pinMode(speakerPin, OUTPUT); // set the speaker pin as an output

}

void loop() {

  digitalWrite(speakerPin, HIGH); // set the speaker pin high

  delayMicroseconds(halfPeriod); // wait for half the period

  digitalWrite(speakerPin, LOW); // set the speaker pin low

  delayMicroseconds(halfPeriod); // wait for the other half of the period

}
