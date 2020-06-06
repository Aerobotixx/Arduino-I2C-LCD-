//*****************READ INSTRUCTIONS CAREFULLY******************
//AFTER FINDING THE I2C ADDRESS, INSTALL THE FOLLOWING LIBRARY AS SHOWN IN VIDEO.
//IF YOU FACE ANY PROBLEM IN INSTALLING THE LIBARY, DOWNLOAD & INSTALL IT MANUALLY.
//DOWNLOAD THE LIBRARY FROM THIS LINK : https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
//GET OTHER EXAPMLE CODES HERE : https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library/tree/master/examples
//**************************************************************

#include <LiquidCrystal_I2C.h>    //importing library. make sure you have installed it

//creating object of LCD with I2C address & LCD type
LiquidCrystal_I2C lcd(0x27,16,2);  //(LCD address, lcd column, lcd row)
//LiquidCrystal_I2C lcd(your address,20,4);  //If you have 20 x 4 LCD, then use this line with yor LCD address

void setup() 
{
  // put your setup code here, to run once:
   lcd.init();  //initialize LCD
   lcd.backlight();   //You can control the backlight by this function. use nobacklight() to turn off the backlight
}

void loop() 
{
  // put your main code here, to run repeatedly:

  /*give the initial position to display text
  lcd.setCursor(0,0) the first 0 is out of 16 & second 0 is out of 2 (as of 16x2 LCD)*/
  lcd.clear();
  lcd.setCursor(0,0); //Data on line number 1 with initial position 0 
  
  /*data whichever you want to display. It should be only 16 characters long */
  lcd.print("WELCOME");   
  lcd.setCursor(0,1);   //Data on line number 2 with initial position 0
  lcd.print("THIS IS 16x2 LCD"); 
}
