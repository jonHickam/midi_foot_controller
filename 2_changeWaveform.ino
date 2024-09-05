
void changeWaveform() {
        if (SoundSelect == 0) {
          current_waveform = WAVEFORM_SAWTOOTH;
          Debugln("WAVEFORM_SAWTOOTH 1");
          envelope.attack(10);
          envelope.release(100);
        }
        else if (SoundSelect == 1) {
          current_waveform = WAVEFORM_SAWTOOTH;
          Debugln("WAVEFORM_SAWTOOTH 2");
          envelope.attack(20);
          envelope.release(200);
        }
        else if (SoundSelect == 2) {
          current_waveform = WAVEFORM_SAWTOOTH;
          Debugln("WAVEFORM_SAWTOOTH 3");
          envelope.attack(30);
          envelope.release(param);
        }
        else if (SoundSelect == 3) {
          current_waveform = WAVEFORM_SAWTOOTH_REVERSE;
          Debugln("WAVEFORM_SAWTOOTH_REVERSE 1");
          envelope.attack(10);
          envelope.release(100);
        }
        else if (SoundSelect == 4) {
          current_waveform = WAVEFORM_SAWTOOTH_REVERSE;
          Debugln("WAVEFORM_SAWTOOTH_REVERSE 2");
          envelope.attack(20);
          envelope.release(200);
        }
        else if (SoundSelect == 5) {
          current_waveform = WAVEFORM_SAWTOOTH_REVERSE;
          Debugln("WAVEFORM_SAWTOOTH_REVERSE 3");
          envelope.attack(30);
          envelope.release(param);
        }
        else if (SoundSelect == 6) {
          current_waveform = WAVEFORM_SQUARE;
          Debugln("WAVEFORM_SQUARE 1");
          envelope.attack(10);
          envelope.release(100);
        }
        else if (SoundSelect == 7) {
          current_waveform = WAVEFORM_SQUARE;
          Debugln("WAVEFORM_SQUARE 2");
          envelope.attack(20);
          envelope.release(param);
        }
        else if (SoundSelect == 8) {
          current_waveform = WAVEFORM_PULSE;
          Debugln("WAVEFORM_PULSE 1");
          envelope.attack(10);
          envelope.release(100);
        }
        else if (SoundSelect == 9) {
          current_waveform = WAVEFORM_PULSE;
          Debugln("WAVEFORM_PULSE 2");
          envelope.attack(20);
          envelope.release(param);
        }
        else if (SoundSelect == 10) {
          current_waveform = WAVEFORM_SINE;
          Debugln("WAVEFORM_SINE");
          envelope.attack(10);
          envelope.release(param*3);
        }
      waveform.begin(current_waveform);
    
}
