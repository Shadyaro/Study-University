// Example 1

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}



// Example 2

int RELAY1= 10;

void setup() {
    Serial.begin(9600);
    pinMode(RELAY1, OUTPUT); 
}
void loop() {
    digitalWrite(RELAY1,0);
    Serial.println("Light ON");
    delay(2000);
    digitalWrite(RELAY1,1); // Turns ON Relays 1
    Serial.println("Light OFF"); // // Wait 2 seconds
    delay(2000); // Turns Relay Off
}
