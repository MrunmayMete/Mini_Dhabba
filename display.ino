void initializeDisplay() {
  lcd.init();      // Initialize the LCD
  lcd.backlight(); // Turn on the backlight
  lcd.setCursor(0, 0); // Set cursor to the first line
  lcd.print("  IFR Intern's"); // Print the first line of text
  lcd.setCursor(0, 1); // Set cursor to the second line
  lcd.print("   SPOT-MICRO"); // Print on the second line
}