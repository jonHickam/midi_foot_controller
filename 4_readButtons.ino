void readControls() {
//read octave

  int readOctave = checkDentent(OctaveReadPin);
 //   Debug("Octave: ");
  //  Debugln(readOctave);
    
    if (readOctave != OctaveChoice && lastOctaveChange > 500)  { //this means we need to change
      Debug("Octave change from ");
      Debug(OctaveChoice);
      Debug(" to ");
      Debugln(readOctave);
      OctaveChoice = readOctave;
      lastOctaveChange = 0;
    }
//read wave choice
  int readSoundSelect = checkDentent(SoundSelectPin);
    if (readSoundSelect != SoundSelect && lastSoundChange > 500)  { //this means we need to change
      SoundSelect = readSoundSelect;
      changeWaveform();
      lastSoundChange = 0;
    }    

// read param pot
if (lastParamRead > 1000) {
  param = analogRead(paramPin);
  //Debug("Param: ");
  //Debugln(param);
  lastParamRead = 0;
}

}

//read notes

void readButtons() {
  digitalWrite(pulsePin,HIGH);
  delay(50);
  for(int x = 0; x < 14; x ++){
   int val = digitalRead(notePins[x]);
   if( val == 1 && buttonState[x] == 0 && lastNoteOn > 400) { // this is a button press
      if (x == 12 && note > 1 ) { // fifth up
        note = note + 7 ;
      }
      else if (x == 13 && note > 1 ) { // fifth down
        note = note - 7 ;
      }      
      else {
        note = 12 * OctaveChoice + x;
      } 
      Debug("button press: ");
      Debug(x);
      Debug(" MIDI value: ");
      Debugln(note);
      usbMIDI.sendNoteOn(note, 99, midiChannel);
      makeNoise(note);
      lastNoteOn = 0;
      buttonState[x] = val;
  }
  else if ( val == 0 && buttonState[x] == 1 && lastNoteOff > 400) { // this is a button release
   //change order of buttons (because it was wired backwards
      if (x < 12 ) { // fifth up
        note = 12 * OctaveChoice + x;
      }
    Debug("button release: ");
      Debug(x);
      Debug(" MIDI value: ");
      Debugln(note);
      usbMIDI.sendNoteOff(note, 0, midiChannel);
      stopNoise(note);
      buttonState[x] = val;
      lastNoteOff = 0;
      

     } // button release   
  }  // for loop
  digitalWrite(pulsePin,LOW);
} //function
  
