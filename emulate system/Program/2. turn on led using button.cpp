/*

* Depedensy

    - Jumper wires (generic)
    - Arduino UNO
    - 220 ohm & 10K ohm Resistors
    - LED (generic)
    - SparkFun Pushbutton switch 12mm

*/

const int BUTTON = 2;
const int LED = 13;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH)
  {
    digitalWrite(LED, HIGH);
  } 
  else{
    digitalWrite(LED, LOW);
  }
}


