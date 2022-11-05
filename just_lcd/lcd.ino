#include <LiquidCrystal.h>
int tmp;
// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() 
{
    lcd.begin(16, 2);
 
    lcd.clear();
}
 
void loop() 
{
    tmp = analogRead(A5);
    lcd.setCursor(0, 1);
    lcd.setCursor(0, 0);
    lcd.clear();

    
    lcd.setCursor(0, 0);
    lcd.print(tmp);
    delay(250);


}
