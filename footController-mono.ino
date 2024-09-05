 
#include <Audio.h>
#include <Wire.h>
int ByteDebug = 1;

void setup() {
  // put your setup code here, to run once:
  //Initialize serial and wait for port to open:
  if (ByteDebug == 1){
    Serial.begin(9600);
    delay(2000);
     // while (!Serial) {
      ; // wait for serial port to connect. Needed for native USB port only
  //  }
    Serial.println("Debuggin");
  }
  
  AudioMemory(20);

  initializeButtons();
  initializeWaveforms();
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the control buttons.  
   readControls();
   readButtons();
   delay(30);

}
