#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,16,2);
int LED = 9;  
int ALCOHOL_sensor = 3;// MQ-6 SENSOR  
int ALCOHOL_detected; 
int IRsensor =9;
int hasObstacle = HIGH;

void setup()
{
   pinMode(LED, OUTPUT);
  pinMode(IRsensor, INPUT);
 lcd.init();
  lcd.clear();         
  lcd.backlight();
   pinMode(LED, OUTPUT);
   pinMode(ALCOHOL_sensor, INPUT);  
  pinMode(IRsensor, INPUT);

Serial.begin(9600);
lcd.begin(16, 2);
lcd.setCursor(0, 1);
lcd.print("SCANNING");
delay(1000); 
}
void loop()
{
   
  lcd.clear();
hasObstacle = digitalRead(IRsensor);

if(digitalRead(ALCOHOL_detected) == 1;hasObstacle == LOW)
{

digitalWrite(LED, HIGH);
lcd.print("HELMET WEARED");
lcd.setCursor(0, 1);
Serial.println("No ALCOHOL detected ");  
lcd.print("...OTP is 1..");

}
else
{
   Serial.println("ALCOHOL detected...");    
   digitalWrite(LED, LOW);
lcd.print("NO HELMET");
lcd.setCursor(0, 1);
lcd.print("....ENTER 0....");
}

delay(500);
} 
