//*****************READ INSTRUCTIONS CAREFULLY******************
//AFTER FINDING THE I2C ADDRESS, INSTALL THE FOLLOWING LIBRARY AS SHOWN IN VIDEO.
//IF YOU FACE ANY PROBLEM IN INSTALLING THE LIBARY, DOWNLOAD & INSTALL IT MANUALLY.
//DOWNLOAD THE LIBRARY FROM THIS LINK : https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
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
  lcd.clear();  //to clear previous data
  lcd.setCursor(0,0);  
  lcd.print("WELCOME");   
  lcd.setCursor(0,1);
  lcd.print("THIS IS 16x2 LCD"); 
  delay(3000);  //print data for 3 seconds
  
  //*****************START NEW PAGE****************************
  lcd.clear();  //clear first page
  lcd.setCursor(4,0);  //set new cusror position on first line
  lcd.print("WELCOME");   
  lcd.setCursor(2,1);   //set new cursor position on second line
  lcd.print("TO MY CHANNEL"); 
  delay(3000);  //print data for 3 seconds
}
