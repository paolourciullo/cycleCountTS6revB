#include <Wire.h>
#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2);

int analogPin = 0;
int val = 0;
int cycleCount = 0;
//int cycleCountTeef = 50;

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin TDCprobeA as an input.
  //const int tdcProbeA = A1;
  //Serial.begin(9600);
  
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
}

void loop() {
val = analogRead(analogPin); // read the input pin
//Serial.println(val); // display value in ser mon

if (val > 100){
  delay (1);
  if (val < 50);{
    
    cycleCount ++;
    }
  
  Serial.println(cycleCount);
  lcd.setCursor(0,0);
  lcd.print(cycleCount);
  }
}
