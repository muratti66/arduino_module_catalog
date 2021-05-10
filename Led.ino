#define LED_PIN """PIN Number is HERE"""

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Led On
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    // Led Off
    digitalWrite(LED_GREEN_PIN, LOW);
    delay(1000);
}