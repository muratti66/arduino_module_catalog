#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     4
#define SCREEN_ADDRESS 0x3C // for Example A4, A5
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
    if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
        Serial.println("SSD1306 allocation failed");
        for(;;);
    }

}

void loop() {
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    // display.setCursor("""Width Point""", """Height Point""");
    display.setCursor(0, 0);
    display.print("Sample Line 1");
    display.setCursor(0, 10);
    display.print("Sample Line 2");
    display.setCursor(0, 20);
    display.print("Sample Line 3");
    display.setCursor(0, 30);
    display.print("Sample Line 4");
    display.setCursor(0, 40);
    display.print("Sample Line 5");
    display.setCursor(0, 50);
    display.print("Sample Line 6");
    display.display();
}

// Analog Address Detecting, Maybe it will work for you.
void address_detect() {
  byte error, address;
  int nDevices;

  Serial.println("Scanning...");
  nDevices = 0;
  for (address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address < 16)
        Serial.print("0");
      Serial.print(address, HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      if (address < 16)
        Serial.print("0");
      Serial.println(address, HEX);
    }
  }
  if (nDevices == 0)
    Serial.println("No I2C devices found\n");
  else
    Serial.println("done\n");
}