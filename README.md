
Distance Measuring with HC-SR04 and Arduino

This project demonstrates how to measure distance using the HC-SR04 Ultrasonic Sensor and Arduino. The distance is measured in real-time and can be displayed on an LCD or serial monitor. It's perfect for beginners in electronics and Arduino enthusiasts looking to understand how ultrasonic sensors work.


---

⚙ Features

Real-time distance measurement in centimeters or inches.

Easy-to-understand and modify code.

Suitable for robotics, automation, and obstacle detection projects.



---

🛠 Components Required

Arduino UNO (or any compatible board)

HC-SR04 Ultrasonic Sensor

16x2 LCD (Optional for display)

Breadboard and Jumper Wires



---

🔌 Circuit Diagram

For LCD connections, refer to standard 16x2 LCD pinouts.


---

📜 How It Works

The HC-SR04 sensor emits ultrasonic waves that bounce back when they hit an object. The time taken for the echo to return is measured and converted to distance 


---

🚀 Getting Started

Step 1: Clone the Repository

[git clone https://github.com/<your-username>/<repository-name>.git](https://github.com/KechezElectronics/Measuring-distance-with-Arduin-and-HC-SR04)

Step 2: Open the Project

1. Launch Arduino IDE.


2. Open the .ino file from the cloned folder.



Step 3: Upload the Code

1. Connect your Arduino to your computer.


2. Select the correct Board and Port.


3. Click Upload.




---

🔍 Code Overview


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


🏗 Applications

Obstacle detection in robotics

Automatic parking systems

Smart distance monitoring systems



---

🤝 Contributing

Contributions are welcome! Feel free to submit pull requests or open issues for suggestions or bug fixes.


---


📞 Contact

For any queries or suggestions, feel free to reach out:

YouTube: Kechez Electronics

Email: [tinashemakeche.3@gmail.com]



---

Would you like to add any specific details or modify this further?
