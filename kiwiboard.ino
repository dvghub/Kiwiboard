#include <Keyboard.h>

int blue = 8;
int led = 13;

void setup() {
  pinMode(blue, INPUT);
  digitalWrite(blue, HIGH);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(blue) == LOW) {
    Keyboard.write('b');
    digitalWrite(led, HIGH);
  }
}
