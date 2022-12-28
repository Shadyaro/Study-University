/*

yellow => button: on = led: on 
yellow => button: off = led: off

green => yellow => off => button: on = led: off
green => yellow => off => button: off = led: on

green => yellow => on => button: on = led: on
green => yellow => on => button: off = led: off

*/



const unsigned int buttonPinYellow = 4;
const unsigned int buttonPinGreen = 2;

const unsigned int ledPinYellow = 8;
const unsigned int ledPinGreen = 9;
 


int buttonStateYellow = 0;
int buttonStateGreen = 0;




int oldButtonStateYellow = LOW;
int oldButtonStateGreen = LOW;

int ledStateYellow = LOW;
int ledStateGreen = LOW;



void setup() {
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(buttonStateYellow, INPUT);
  pinMode(buttonStateGreen, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {

  buttonStateYellow = digitalRead(buttonPinYellow);

  if (buttonStateYellow != oldButtonStateYellow && buttonStateYellow == HIGH) {
    ledStateYellow = (ledStateYellow == LOW ? HIGH : LOW);
    digitalWrite(ledPinYellow, ledStateYellow);
    delay(50);
  }
  





 buttonStateGreen = digitalRead(buttonPinGreen);

  if ((buttonStateGreen != oldButtonStateGreen && buttonStateGreen == HIGH) && ledStateYellow == LOW) {

    // ledStateGreen = (ledStateGreen == HIGH ? LOW : HIGH); // this is also true
    ledStateGreen = (ledStateGreen == LOW ? HIGH : LOW);
    digitalWrite(ledPinGreen, ledStateGreen);
    delay(50); 

  }


  if ((buttonStateGreen != oldButtonStateGreen && buttonStateGreen == HIGH) && ledStateYellow == HIGH) {

    ledStateGreen = (ledStateGreen == LOW ? HIGH : LOW);
    digitalWrite(ledPinGreen, ledStateGreen);
    delay(50);

  }

  oldButtonStateGreen = buttonStateGreen;
  oldButtonStateYellow = buttonStateYellow;

}
