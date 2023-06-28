/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Documents/CTD_2023/Personal_Projects/Button/src/Button.ino"
/*
 * Project Button
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "/Users/admin/Documents/CTD_2023/Personal_Projects/Button/src/Button.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D0, INPUT);
  pinMode(D1, OUTPUT);
  Serial.begin(9600);
}

// loop() runs over and over again, as quickly as it can execute.
bool once = false;
bool state = false;
void loop() {
  // The core of your code will likely live here.
  if(digitalRead(D0)==HIGH&&!once) {
    Serial.println("Button Clicked");
    state = !state;
    once=true;
  }
  if(digitalRead(D0)==LOW) {
    once = false;
  }
  if(state) {
    digitalWrite(D1, HIGH);
  } else {
    digitalWrite(D1, LOW);
  }
}