#include <Arduino.h>
#include "SerialManager.h"
#include "logic.h"

// Globals
Logic logic;

void setup() {
  logic.setup();

  pinMode(17, OUTPUT);
}

void loop() {
    digitalWrite(17, HIGH);

    logic.handle();
}