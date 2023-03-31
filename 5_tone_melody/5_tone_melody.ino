#include <toneAC.h>


int speakerPin = 9; // connect speaker to digital pin 9

int NOTE_C4;

int NOTE_G3;

int NOTE_A3;

int NOTE_B3;



int melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4 }; // define the melody notes (using note frequencies)

int durations[] = { 4, 8, 8, 4, 4, 4, 4, 4 }; // define the note durations (in quarter notes)

int noteCount = sizeof(melody) / sizeof(int); // count the number of notes in the melody

int tempo = 120; // set the tempo (in beats per minute)

int beatLength = 60000 / tempo; // calculate the length of each beat (in milliseconds)

void setup() {

  pinMode(speakerPin, OUTPUT); // set the speaker pin as an output

}

void loop() {

  for (int i = 0; i < noteCount; i++) {

    if (melody[i] == 0) { // if the note is a rest

      delay(beatLength / durations[i]); // wait for the rest duration

    } else { // if the note is a tone

      tone(speakerPin, melody[i], beatLength / durations[i]); // play the tone for the note duration

    }

    delay(beatLength / 20); // add a small delay between notes

  }

}
