// set up the button array

void initializeButtons() {

  Debug(" initializing buttons ");
    pinMode(pulsePin,OUTPUT);
    
    for(int x = 0; x < cSize; x ++) {
 
    pinMode(notePins[x], INPUT_PULLDOWN);
    buttonState[x] = 0;
    Debug(notePins[x]);
    Debug(" ");
    Debugln(" ");
      }
    }


void initializeWaveforms() {
 // for(int x = 0; x < 4; x++) {
    waveform.begin(current_waveform);
    waveform.amplitude(initalAmplitude);
    envelope.attack(10);
    envelope.release(100);
//  }
 }
