#define BUTTON_PIN """PIN Number is HERE"""

void setup() {
    pinMode(BUTTON_PIN, INPUT);
}

void loop() {
    if (digitalRead(BUTTON_PIN) == 1) {
        Serial.println("Button Pressed...");
    }
}