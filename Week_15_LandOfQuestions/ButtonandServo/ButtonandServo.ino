/*
  Control Servo with Button press

  
  This example code is in the public domain.

  
*/
#include <Servo.h>
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 12;  // the number of the pushbutton pin
const int ledPin = 13;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status


Servo myservo;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
   myservo.attach(11);  
   Serial.begin(9600); //This pipes to the serial monitor
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    Serial.println("Press");
    myservo.write(50);              // tell servo to go to position in variable 'pos'
    delay(1000);          
  } else {
    // turn LED off:
    Serial.println("None");
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    //delay(1000);    
  }
}
