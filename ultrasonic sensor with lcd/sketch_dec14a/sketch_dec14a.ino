
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 2); // Set the LCD address to 0x27
const int trigPin = 9;
const int echoPin = 10;
long duration;
float distance ;
void setup() {
lcd.init();
lcd.backlight();
lcd.print("Distance = ");

pinMode(trigPin ,OUTPUT);
pinMode(echoPin ,INPUT);
Serial.begin(9600);
}

void loop() {
reading();
lcd.setCursor( 11,0);
lcd.print(distance);
lcd.setCursor( 16,0);
lcd.print("cm ");
Serial.println(distance);//to ptint on serial monitor or ble terminal using hc05 and cellphone terminal app
delay(250);

}
void reading (){
  digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance = duration*(0.034)/2;
}
