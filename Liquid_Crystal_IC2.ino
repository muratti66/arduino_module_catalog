#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define LCD_CHANNEL 0x27 //Analog Address
#define LCD_WIDTH 16
#define LCD_HEIGHT 2

LiquidCrystal_I2C lcd(LCD_CHANNEL, LCD_WIDTH, LCD_HEIGHT);


void setup() {
    lcd.begin();
    // LCD Screen Light On
    lcd.backlight();
    // LCD Screen Light Off
    // lcd.noBacklight();
}

void loop() {
    lcd.setCursor(0, 0);
    lcd.print("""First line message is HERE""");
    lcd.setCursor(0, 1);
    lcd.print("""Second line message is HERE""");
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