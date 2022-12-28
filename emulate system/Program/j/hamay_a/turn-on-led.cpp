/*

* Dependency:
  - 1 x LED
  - 1 x 220 ohm resistor
  - 1 x Arduino UNO
  - 1 x breadboard
  - 2 x jumper Wires

*/


const int led = 8; // use digital I/O pin 8

void setup() {
  pinMode(led,OUTPUT); // set pin 8 to be an output output
}

void loop() {
  digitalWrite(led,HIGH); // set pin 8 HIGH, turning on LED
  delay(1000); // delay 1000 milliseconds
  
  digitalWrite(led,LOW); //set pin 8 LOW, turning off LED
  delay(1000); // delay 1000 milliseconds
}
