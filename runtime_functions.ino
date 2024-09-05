//create MIDI and audio notes


void makeNoise (int midiVal) {
    waveform.frequency(Frequency[midiVal]);
    envelope.noteOn();
  }

void stopNoise(int note) {
    envelope.noteOff();

  }


int checkDentent(int readPin) {
  int dententPot1 = analogRead(readPin);
 // Debugln(dententPot1);
 // Debug(readPin);
 // Debug(" ");
 // Debugln(dententPot1);
if (dententPot1  < 10 ) {
  return 10;
}
else if ( dententPot1 < 100 ) { //48
  return  9;
}
else if ( dententPot1 < 200 ) { //165
  return  8;
}
else if (dententPot1  < 310 ) { //285
  return  7;
}
else if (dententPot1  < 440 ) { //400
  return  6;
}
else if (dententPot1 < 580 ) { //512
  return 5;
}
else if (dententPot1  < 700 ) { //620
  return 4;
}
else if (dententPot1 < 800 ) { //735
   return 3;
}
else if  (dententPot1 < 910 ) { //859
  return 2;
}
else if ( dententPot1 < 1000 ) { //980
    return 1;
}
else  { //1023
    return 0;
}


}
