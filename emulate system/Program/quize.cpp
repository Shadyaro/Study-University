/*

yellow => button: on = led: on 
yellow => button: off = led: off

green => yellow => off => button: on = led: off
green => yellow => off => button: off = led: on

green => yellow => on => button: on = led: on
green => yellow => on => button: off = led: off

*/

int ledPinYellow = 8;
int ledPinGreen = 9;

int buttonPinYellow = 4;
int buttonPinGreen = 2;

bool stateYellow = false;
bool stateGreen = false;

void setup() {
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(buttonPinYellow, INPUT);
  pinMode(buttonPinGreen, INPUT);

}

void loop() {

  int x = digitalRead(buttonPinYellow);
  int y = digitalRead(buttonPinGreen);





  if (x == HIGH) {
    stateYellow = !stateYellow;
  }

  if (stateYellow == true) {
    digitalWrite(ledPinYellow, HIGH);
  } else if (stateYellow == false) {
    digitalWrite(ledPinYellow, LOW);
  }





  if (y == HIGH) {
    stateGreen = !stateGreen;
  }

  if (stateGreen == true && stateYellow == true) {
    digitalWrite(ledPinGreen, HIGH);
  } else if (stateGreen == false && stateYellow == true) {
    digitalWrite(ledPinGreen, LOW);
  }

  if (stateGreen == true && stateYellow == false) {
    digitalWrite(ledPinGreen, LOW);
  } else if (stateGreen == false && stateYellow == false) {
    digitalWrite(ledPinGreen, HIGH);
  }

}