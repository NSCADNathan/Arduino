/*
███████╗███████╗███████╗X██████╗X██████╗X██╗███╗XXX██╗████████╗███████╗███████╗████████╗
╚════██║██╔════╝██╔════╝██╔════╝X██╔══██╗██║████╗XX██║╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝
XXXX██╔╝███████╗█████╗XX██║XX███╗██████╔╝██║██╔██╗X██║XXX██║XXX█████╗XX███████╗XXX██║XXX
XXX██╔╝X╚════██║██╔══╝XX██║XXX██║██╔═══╝X██║██║╚██╗██║XXX██║XXX██╔══╝XX╚════██║XXX██║XXX
XXX██║XX███████║███████╗╚██████╔╝██║XXXXX██║██║X╚████║XXX██║XXX███████╗███████║XXX██║XXX
XXX╚═╝XX╚══════╝╚══════╝X╚═════╝X╚═╝XXXXX╚═╝╚═╝XX╚═══╝XXX╚═╝XXX╚══════╝╚══════╝XXX╚═╝XXX
___ _  _ ____ _  _ ____ ____ ____ __ _ ___
 |  |--| |===  \/  |=== |--< |--| | \|  | 

This tests wiring of a 7 segment COMMON CATHODE display

Attach common pin to D2 of Arduino

Segments: A,B,C,D,E,F,G,Period correlate to pins D6-D13

*/

void setup() {
  // initialize digital pins as outputs:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, LOW);   // Pull the common pin LOW.  This is for common Cathode LEDs!
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(13, LOW);
}
