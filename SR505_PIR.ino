#define PIR_PIN """PIN Number is HERE"""

void setup() {
    digitalWrite(PIR_PIN, LOW);
}

void loop() {
    if (digitalRead(PIR_PIN)==HIGH) {
        Serial.println("Pir motion detected..");
    }
}