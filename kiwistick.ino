#include <Joystick.h>

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  8, 0,
  true, true, false,
  false, false, false,
  false, false,
  false, false, false);

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

int pins [12] = {triggerright, triggerleft, right, left, down, up, red, blue, yellow, green, select, start};
int lastState [12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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

  Joystick.begin();
  Joystick.setXAxisRange(-1, 1);
  Joystick.setYAxisRange(-1, 1);
}

void loop() {
  for (int i = 0; i < 12; i ++) {
    int currentState = !digitalRead(pins[i]);
    if (currentState != lastState[i]) {
      switch (pins[i]) {
        case 4: //RIGHT
          if (currentState == 1) {
            Joystick.setXAxis(1);
          } else {
            Joystick.setXAxis(0);
          }
          break;
        case 5: //LEFT
          if (currentState == 1) {
            Joystick.setXAxis(-1);
          } else {
            Joystick.setXAxis(0);
          }
          break;
        case 6: //DOWN
          if (currentState == 1) {
            Joystick.setYAxis(1);
          } else {
            Joystick.setYAxis(0);
          }
          break;
        case 7: //UP
          if (currentState == 1) {
            Joystick.setYAxis(-1);
          } else {
            Joystick.setYAxis(0);
          }
          break;
        default:
          Joystick.setButton(pins[i], currentState);
          break;
      }
      lastState[i] = currentState;
    }
  }
  delay(50);
}
