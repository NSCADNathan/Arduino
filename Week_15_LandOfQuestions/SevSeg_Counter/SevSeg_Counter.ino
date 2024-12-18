/* SevSeg Counter Example for one Digit
 
 ███████╗███████╗██╗   ██╗███████╗███████╗ ██████╗            
██╔════╝██╔════╝██║   ██║██╔════╝██╔════╝██╔════╝            
███████╗█████╗  ██║   ██║███████╗█████╗  ██║  ███╗           
╚════██║██╔══╝  ╚██╗ ██╔╝╚════██║██╔══╝  ██║   ██║           
███████║███████╗ ╚████╔╝ ███████║███████╗╚██████╔╝           
╚══════╝╚══════╝  ╚═══╝  ╚══════╝╚══════╝ ╚═════╝            
                                                             
 ██████╗ ██████╗ ██╗   ██╗███╗   ██╗████████╗███████╗██████╗ 
██╔════╝██╔═══██╗██║   ██║████╗  ██║╚══██╔══╝██╔════╝██╔══██╗
██║     ██║   ██║██║   ██║██╔██╗ ██║   ██║   █████╗  ██████╔╝
██║     ██║   ██║██║   ██║██║╚██╗██║   ██║   ██╔══╝  ██╔══██╗
╚██████╗╚██████╔╝╚██████╔╝██║ ╚████║   ██║   ███████╗██║  ██║
 ╚═════╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝   ╚═╝   ╚══════╝╚═╝  ╚═╝

 ___ _  _ ____ _  _ ____ ____ ____ __ _ ___
 |  |--| |===  \/  |=== |--< |--| | \|  | 

This tests wiring of a 7 segment COMMON CATHODE display using Sevseg library

Attach common pin to D2 of Arduino

Segments: A,B,C,D,E,F,G,Period correlate to pins D6-D13

 This example demonstrates a very simple use of the SevSeg library with a 4
 digit display. It displays a counter that counts up, showing seconds.

 */

#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object

void setup() {
  byte numDigits = 1;
  byte digitPins[] = {2};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_CATHODE; // !!!! >>>> THIS IS CHANGED FROM DEFAULT <<<< !!!!!
  bool updateWithDelays = false; // Default 'false' is Recommended
  bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(100);
}

void loop() {
  static unsigned long timer = millis();
  static int Seconds = 0;
  
  if (millis() - timer >= 1000) {
    timer += 1000;
    Seconds++; // 1000 milliSeconds is equal to 1 Second
    
    if (Seconds == 10) { // Reset to 0 after counting for 10 seconds.
      Seconds=0;
    }
    sevseg.setNumber(Seconds, 1); // this command works like this: sevseg.setNumber(::first number or VARIABLE is the number you want to show::, ::which segment to target::)
  }

  sevseg.refreshDisplay(); // Must run repeatedly
}

/// END ///
