const int tilt = 2; // the number of the tilt pin
const int ledPin = 8; // the number of the LED pin
int buttonStatetilt = 0; // variable for reading the pushbutton status

const int ledPPin = 8; // the number of the LED pin
int buttonV = 0;
const int buttonPin = 4; //the button connect to pin

void setup() {
  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output:
  pinMode(tilt, INPUT);
  // initialize the tilt pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(ledPPin, OUTPUT); //initialize the led pin as output
}

void loop() {
  
  buttonStatetilt = digitalRead(tilt); // read the state of the pushbutton value:
  if (buttonStatetilt == HIGH) {
    digitalWrite(ledPin, HIGH); // turn LED on:
  } else {
    digitalWrite(ledPin, LOW); // turn LED off:
  }
  
  
  
  buttonV = digitalRead(buttonPin);

  if (buttonV == HIGH) {
    digitalWrite(ledPPin, HIGH); //turn the led on
  } else {
    digitalWrite(ledPPin, LOW); //turn the led off
  }
  
}

















