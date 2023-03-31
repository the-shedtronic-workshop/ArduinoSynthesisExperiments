#include <TimerOne.h>

int speakerPin = 9; // connect speaker to digital pin 9

unsigned int sampleRate = 8000; // set the sample rate (samples per second)

void setup() {

  pinMode(speakerPin, OUTPUT); // set the speaker pin as an output

  Timer1.initialize(1000000 / sampleRate); // set the timer interval

  Timer1.attachInterrupt(generateWaveform); // attach the interrupt function

}

void loop() {

  // do nothing

}

void generateWaveform() {

  static unsigned long phaseAccumulator = 0; // initialize the phase accumulator

  static float phaseIncrement = 440.0 * 65536.0 / sampleRate; // calculate the phase increment (for 440 Hz)

  static float amplitude = 127.0; // set the amplitude (out of 255)

  int outputValue = (int)(amplitude * sin(phaseAccumulator * 2.0 * 3.1415926 / 65536.0) + 127.0); // generate the output value (between 0 and 255)

  analogWrite(speakerPin, outputValue); // write the output value to the speaker pin

  phaseAccumulator += phaseIncrement; // update the phase accumulator

}
