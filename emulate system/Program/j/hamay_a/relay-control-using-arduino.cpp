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
