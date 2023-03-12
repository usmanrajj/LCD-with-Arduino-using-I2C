/*
Rajj YT
Video Link :- 
https://youtu.be/hmqw_GWdo18
Circuit link:-
https://github.com/usmanrajj/LCD-with-Arduino-using-I2C
*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>  // Add this library 

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();      // Replace "begin" with "init" if code not verifying

	// Turn on the blacklight and print a message.
	lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Hello, Rajj!");
}
void loop() {
  lcd.setCursor(7, 1);
  lcd.print(millis() / 1000);
}