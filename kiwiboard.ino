#include <Keyboard.h>

int blue = 8;
int led = 13;
int high = HIGH;

void setup() {
  pinMode(blue, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Keyboard.begin();
}

void loop() {
  int state = digitalRead(blue);
  if (state != high) {
    Keyboard.write('b');
  }
}
//
