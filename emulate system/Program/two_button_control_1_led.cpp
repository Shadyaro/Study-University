const unsigned int buttonPinR = 2;
const unsigned int buttonPinL = 4;
const unsigned int ledPin = 13;

int buttonStateR = 0;
int buttonStateL = 0;

int oldButtonState = LOW;
int oldButtonStateL = LOW;

int ledState = LOW;
int ledStateL = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPinR, INPUT);
  pinMode(buttonPinL, INPUT);

}

void loop() {
  buttonStateR = digitalRead(buttonPinR);
  buttonStateL = digitalRead(buttonPinL);

  if (buttonStateR != oldButtonState &&
      buttonStateR == HIGH)
  {
    ledState = (ledState == LOW ? HIGH : HIGH);
    digitalWrite(ledPin, ledState);
    delay(50);
  }
  oldButtonState = buttonStateR;
  
  if (buttonStateL != oldButtonStateL &&
      buttonStateL == HIGH)
  {
    ledStateL = (ledStateL == LOW ? LOW : LOW);
    digitalWrite(ledPin, ledStateL);
    delay(50);
  }
  oldButtonStateL = buttonStateL;
}
