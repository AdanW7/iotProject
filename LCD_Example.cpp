/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/HP/EE1301/Projects/finalProject/finalProject/LCDtest.ino"
#include <LiquidCrystal.h>
#include <particle.h>

void setup();
void loop();
#line 4 "c:/Users/HP/EE1301/Projects/finalProject/finalProject/LCDtest.ino"
LiquidCrystal lcd(D4,D5,D0,D1,D2,D3);

void setup(){
    lcd.begin(16, 2);
    lcd.print("Hello,World!");
}

void loop(){
    lcd.setCursor(0, 1);
    lcd.print(millis()/1000);
}