#include <SoftwareSerial.h>

#define WIFI_SPEED 115200
#define ESP_RX """PIN Number is HERE"""
#define ESP_TX """PIN Number is HERE"""

SoftwareSerial esp8266(ESP_RX, ESP_TX);

void setup() {
    esp8266.begin(WIFI_SPEED);
}

void loop() {
    esp8266.println("""ESP commands is here""")
}