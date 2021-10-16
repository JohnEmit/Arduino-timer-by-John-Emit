#include <LiquidCrystal.h>

//Connected ports
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7

int SEC; //seconds
int MIN; //minutes
int HOU; //Hour
unsigned long timer;



void setup() {
  lcd.begin(16, 2); // Display Type
  lcd.setCursor(2, 0); // We put the cursor on the first line, the second character
  lcd.print("JOHN TIMER"); // We output the message on the first line 
}

void loop() { 
  if (millis() - timer > 995) { //if more than one second passes, then we indicate this
   timer = millis(); // timer is milliseconds
   SEC++; // second+1
  
   if (SEC > 59) {SEC = 0; MIN++;}
   if (SEC < 10) 
   {
    lcd.setCursor(10, 1);
    lcd.print("0");
    lcd.setCursor(11, 1);
    lcd.print(SEC);  
   }
   else {lcd.setCursor(10, 1); lcd.print(SEC);}

   if (MIN > 59) {MIN = 0; HOU++;}
   if (MIN < 10)
   {
    lcd.setCursor(7, 1);
    lcd.print("0");
    lcd.setCursor(8, 1);
    lcd.print(MIN);
   }
   else {lcd.setCursor(7, 1); lcd.print(MIN);}
   }
   if (HOU > 24) {HOU = 0;}
   if (HOU < 10)
   {
   lcd.setCursor(4, 1);
   lcd.print("0");
   lcd.setCursor(5, 1);
   lcd.print(HOU); 
   }
   else {lcd.setCursor(5, 1); lcd.print(HOU);}

   lcd.setCursor(9, 1);
   lcd.print(":");
   lcd.setCursor(6, 1);
   lcd.print(":");
   
   }
