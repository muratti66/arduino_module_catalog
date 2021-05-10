#define VOICE_PIN """PIN Number is HERE"""

void setup() {
    pinMode(VOICE_PIN, OUTPUT);
}

void loop() {
    tone(VOICE_PIN, """TONE Code is HERE""", """Tone Ring Time""");
    noTone(VOICE_PIN);
}