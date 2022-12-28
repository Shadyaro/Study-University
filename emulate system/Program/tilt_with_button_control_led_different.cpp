const unsigned int buttonPin = 4;
const unsigned int ledPPin = 13;
const int ledPin = 8;
const int tilt = 2;
int buttonStatetilt = 0; 

int buttonState = 0;
int oldButtonState = LOW;
int ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(tilt, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPPin, OUTPUT); //initialize the led pin as output

}


void loop() {
  
  buttonStatetilt = digitalRead(tilt); // read the state of the pushbutton value:
  
  if (buttonStatetilt == HIGH) {
    digitalWrite(ledPin, HIGH); // turn LED on:
  } else {
    digitalWrite(ledPin, LOW); // turn LED off:
  }
  
  buttonState = digitalRead(buttonPin);

  if (buttonState != oldButtonState &&
      buttonState == HIGH)
  {
    ledState = (ledState == LOW ? HIGH : LOW);
    digitalWrite(ledPPin, ledState);
    delay(50);
  }
  oldButtonState = buttonState;
}