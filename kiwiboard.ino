#include <Keyboard.h>

int triggerright = 2;
int triggerleft = 3;
int right = 4;
int left = 5;
int down = 6;
int up = 7;
int red = 8;
int blue = 9;
int yellow = 10;
int green = 14;
int select = 15;
int start = 16;

void setup() {
  pinMode(triggerright, INPUT_PULLUP);
  pinMode(triggerleft, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(up, INPUT_PULLUP);
  pinMode(red, INPUT_PULLUP);
  pinMode(blue, INPUT_PULLUP);
  pinMode(yellow, INPUT_PULLUP);
  pinMode(green, INPUT_PULLUP);
  pinMode(select, INPUT_PULLUP);
  pinMode(start, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(triggerright) == LOW) {
    Keyboard.write('w');
  }
  if (digitalRead(triggerleft) == LOW) {
    Keyboard.write('q');
  }
  if (digitalRead(right) == LOW) {
    Keyboard.write(0xD7);
  }
  if (digitalRead(left) == LOW) {
    Keyboard.write(0xD8);
  }
  if (digitalRead(down) == LOW) {
    Keyboard.write(0xD9);
  }
  if (digitalRead(up) == LOW) {
    Keyboard.write(0xDA);
  }
  if (digitalRead(red) == LOW) { //B
    Keyboard.write('z');
  }
  if (digitalRead(blue) == LOW) { //Y
    Keyboard.write('a');
  }
  if (digitalRead(yellow) == LOW) { //X
    Keyboard.write('s');
  }
  if (digitalRead(green) == LOW) { //A
    Keyboard.write('x');
  }
  if (digitalRead(select) == LOW) {
    Keyboard.write(0x85);
  }
  if (digitalRead(start) == LOW) {
    Keyboard.write(0xB0);
  }
}
