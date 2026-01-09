# ⚡ PlatformIO + WOKWI for Arduino Simulations 💡

## 🧠 Overview
This repository is a **complete practical guide** for using **PlatformIO + WOKWI** to simulate **Arduino projects** directly inside **Visual Studio Code** without needing any physical hardware.

If you’ve ever faced difficulties during Arduino labs or personal projects because of **missing components or hardware limitations**, this setup is the perfect solution.  
You can **build, test, and simulate** your Arduino circuits anytime, anywhere completely virtually.

---

## 🧩 What You’ll Need
- 🖥️ **Visual Studio Code (VS Code)**
- ⚙️ **PlatformIO IDE Extension** (Install it inside VS Code)
- 🌐 **WOKWI Account** → [https://wokwi.com](https://wokwi.com)

---

## 🧭 Step 1: Set Up PlatformIO
1. Open **VS Code**
2. Go to **Extensions**
3. Search for **PlatformIO IDE** → Click **Install**
4. Once installed, you’ll see a cool little **👽 alien icon** on the sidebar, that’s your Arduino control center.

---

## ⚙️ Step 2: Create Your Arduino Project
1. Open **PlatformIO Home → New Project**
2. Enter your project details:
   - **Project Name**: *(as you wish)*
   - **Board**: Arduino Uno
   - **Framework**: Arduino
3. Click **Finish**, it will automatically generate the full folder setup for you.

---

## 📈 Step 3: Connect with WOKWI Simulator
1. Go to your **WOKWI account** → Create a **New Project**
2. Use the **tools** to design your project diagram as you like.
3. Copy the **diagram.json** code from your WOKWI project.
4. In your VS Code project folder, create a new file named **`diagram.json`** (same level as `platformio.ini`) and paste the copied code.

---

## ⚙️ Step 4: Configure `wokwi.toml`
1. Open your **diagram.json** file in VS Code.
2. Click the **Play ▶️** button → a new WOKWI window will appear.
3. Click **Open** → You’ll be redirected to your project on WOKWI.
4. Copy the **wokwi.toml** configuration code.
5. In VS Code, create a file named **`wokwi.toml`** (same level as `platformio.ini`) and paste that code.
6. In VS Code’s search bar → type **Build and Run** → Click it.
7. Wait for the build process to finish, you’ll get `.hex` and `.elf` file paths.
8. Copy those paths and update them in your **`wokwi.toml`** file.

---

## 💻 Step 5: Write Your Arduino Code
1. Go to **src → main.cpp**
2. Write your Arduino logic code.
3. Save your file after finishing.
4. Finally, open **diagram.json** → Click **Play ▶️**
5. Your Arduino project now runs virtually in WOKWI!

---

## 💡 Why Recommend This Setup
✅ No hardware? No problem!, Simulate everything virtually  
✅ Built-in **library management** and **debugger**  
✅ Realistic **circuit behavior** for accurate testing  
✅ Ideal for **university labs**, **IoT prototypes**, and **online learning**  
✅ The same code can later be uploaded to a **real Arduino board**

---

# 💡 Example Project: LED Blink

To test this setup, I simulated a simple **LED Blink** project.

- 🔹 The LED connected to pin 13 automatically turns ON and OFF every second.  
- 🔹 This demonstrates how to control digital output pins using Arduino’s basic functions.

This project helped me understand timing control and digital pin behavior — a great starting point for learning Arduino programming and circuit interaction. ⚙️🔥

<img width="1920" height="1042" alt="LED_Blink" src="https://github.com/user-attachments/assets/21f75ea4-7c3d-4c7f-bbea-f5541293d7ae" />

---

# 🚦 Example Project: Traffic Light Simulation

To test this setup, I simulated a simple **Traffic Light System** using three LEDs.

- 🔹 The **green**, **orange**, and **red** LEDs turn ON and OFF in sequence to represent traffic signal timing.  
- 🔹 Each LED changes state after a short delay, imitating real traffic light transitions.  
- 🔹 This project demonstrates how to manage multiple digital outputs and use timing delays effectively.

This experiment helped me understand sequential control and timing — an important step toward building real-world embedded systems. ⚙️💡

<img width="1920" height="1041" alt="LED_Blink Traffic Light" src="https://github.com/user-attachments/assets/9f0c287a-df17-4c6e-93a5-00e57ee16702" />

---

# 🔘 Example Project: LED Blink with Push Button

To test this setup, I simulated a simple **Button Controlled LED** project.

- 🔹 The LED connected to pin 12 turns ON when the button (pin 13) is pressed.  
- 🔹 The button uses an **internal pull-up resistor**, meaning the input reads LOW when pressed.  
- 🔹 This demonstrates how to read digital inputs and control outputs in real time.

This project helped me understand how input and output pins interact in Arduino — an essential concept for building interactive hardware projects. ⚙️✨

<img width="1920" height="1041" alt="LED_Blink with Push Button" src="https://github.com/user-attachments/assets/718b2506-a4f4-4cbf-a8eb-d674e6ee5eaa" />

---

# 🔔 Example Project: Button Controlled Buzzer

To test this setup, I simulated a simple **Button Controlled Buzzer** project.

- 🔹 The buzzer connected to pin 12 produces a sound when the button (pin 13) is pressed.  
- 🔹 The button uses an **internal pull-up resistor**, meaning it reads LOW when pressed.  
- 🔹 The `tone()` and `noTone()` functions control the buzzer sound in real time.

This project helped me learn how to generate sound using Arduino and how digital inputs can trigger specific actions in a circuit. ⚙️🎶

<img width="1920" height="1042" alt="Buzzer with Push Button" src="https://github.com/user-attachments/assets/b8f2ea15-315b-4572-b53b-b2d1be003ce2" />

---

# 🚨 Example Project: Button Controlled LED & Buzzer

To test this setup, I simulated a simple **Button Controlled LED and Buzzer** project.

- 🔹 When the button (pin 13) is pressed, the **LED (pin 12)** lights up and the **buzzer (pin 11)** produces sound.  
- 🔹 The button uses an **internal pull-up resistor**, meaning it reads LOW when pressed.  
- 🔹 Both output devices are controlled simultaneously, showing how multiple components can react to a single input.

This project helped me understand how to handle multiple outputs in response to one input — a key concept in interactive embedded systems. ⚙️🔆🎵

<img width="1920" height="1042" alt="LED and BUZZER with Push Button" src="https://github.com/user-attachments/assets/03fd99cf-bb1e-4e87-940c-cc86946934ad" />

---

# 🖥️ Example Project: Serial Monitor Output

To test this setup, I simulated a simple **Serial Communication** project using the Arduino Serial Monitor.

- 🔹 The program continuously sends the message **"This is Serial Monitor"** to the serial monitor every second.  
- 🔹 The `Serial.begin(9600)` function initializes serial communication at a baud rate of 9600.  
- 🔹 The `Serial.println()` function is used to display data or messages for debugging and testing.

This project helped me understand how to use the Serial Monitor for monitoring program behavior and debugging Arduino projects effectively. ⚙️💬

<img width="1920" height="1041" alt="Serial Monitor" src="https://github.com/user-attachments/assets/b296e953-cd4b-4da0-b486-de5bd3be91bd" />

---

# 💡 Example Project: LED control with Command from Serial Monitor Input

To test this setup, I simulated a simple **LED Control via Serial Monitor** project.

- 🔹 The program accepts user commands **“LEDON”** and **“LEDOFF”** through the Serial Monitor.  
- 🔹 When **LEDON** is entered, the LED (pin 13) turns ON, and when **LEDOFF** is entered, it turns OFF.  
- 🔹 Any other input displays **“Wrong Command”** on the Serial Monitor.  
- 🔹 The `Serial.readStringUntil('\n')` function reads user input, while `Serial.println()` provides feedback.

This project helped me understand how to send and receive data through the Serial Monitor — enabling real-time control and communication with Arduino. ⚙️💻✨

<img width="1920" height="1042" alt="Blink LED with Commad from Serial Monitor Input" src="https://github.com/user-attachments/assets/68b7637e-e4e8-4345-8f0b-160d30a23256" />

---

# 🚨 Example Project: Serial Command LED & Buzzer Control

To test this setup, I simulated a **Serial Command Controlled LED and Buzzer** project.

- 🔹 The program accepts user commands via the Serial Monitor:  
  `LEDON`, `LEDOFF`, `BUZZERON`, `BUZZEROFF`.  
- 🔹 When a command is entered, the corresponding output is activated or deactivated:  
  - **LEDON / LEDOFF** controls the LED (pin 13).  
  - **BUZZERON / BUZZEROFF** controls the buzzer (pin 12).  
- 🔹 Any other input shows **“Wrong Command”** on the Serial Monitor.  

This project helped me understand how to control multiple outputs via serial communication — a key skill for building interactive Arduino systems. ⚙️💡🎵

<img width="1920" height="1042" alt="Blink LED and BUZZER ON with Commad from Serial Monitor Input" src="https://github.com/user-attachments/assets/7036b325-ec38-48ea-a7a6-0b26f88c85a4" />

---

# 🔢 Example Project: 4x4 Keypad Input with Serial Monitor

To test this setup, I simulated a **4x4 Keypad** project that detects key presses and displays them on the Serial Monitor.

- 🔹 The keypad matrix consists of **4 rows and 4 columns** connected to Arduino digital pins.  
- 🔹 When a key is pressed, its value (0–9, A–D, *, #) is shown on the Serial Monitor.  
- 🔹 The `Keypad` library is used to manage row-column scanning and key detection efficiently.  
- 🔹 The project continuously monitors the keypad for input in real time.

This project helped me understand how matrix keypads work and how to interface them with Arduino for digital input detection — a common feature in embedded systems and access control applications. ⚙️🔐

<img width="1920" height="1042" alt="Keypad" src="https://github.com/user-attachments/assets/54505e90-4b45-490c-8e61-533431fb0ff8" />

---

# 🔐 Example Project: Keypad Password System with LED & Buzzer

To test this setup, I simulated a **Keypad-based Password System** that verifies a password entered through a 4x4 keypad.

- 🔹 Users can enter digits using the keypad and press **‘#’** to submit the password.  
- 🔹 The system compares the entered password with the stored one (**12345**).  
- 🔹 If correct, the **LED (pin 13)** turns ON and the **buzzer (pin 12)** produces a tone.  
- 🔹 If incorrect, both the LED and buzzer remain OFF.  
- 🔹 Pressing **‘*’** clears the input and allows re-entry.  
- 🔹 Feedback messages are displayed on the **Serial Monitor** in real time.

This project helped me understand how to handle user input, verify passwords, and trigger output devices — an essential concept for building basic security and access control systems. ⚙️💡🔊

<img width="1920" height="1041" alt="keypad with password for LED and BUZZER on" src="https://github.com/user-attachments/assets/d50637a3-69d1-47e0-9bc8-08044c59da14" />

---

# 🔠 Example Project: Scrolling Text on LCD Display
To test this setup, I simulated a simple LCD text scrolling project.  

🔹 The 16x2 I2C LCD is initialized, and the backlight is turned ON for clear visibility.  
🔹 Two “Hello” messages are displayed on the first and second rows.  
🔹 The text scrolls continuously to the left using the `lcd.scrollDisplayLeft()` function.  
🔹 The `setCursor()` and `print()` functions are used to position and display text.  

This project helped me understand how to create interactive LCD displays and make text animations — a fun way to enhance user interfaces in embedded systems. ⚙️🔠✨

<img width="1920" height="1038" alt="LCD_I2C Hello" src="https://github.com/user-attachments/assets/dc859a17-046f-4880-9bf0-158e71047d97" />

---

# 🔢 Example Project: LCD_I2C Up Count and Down Count with Push Buttons  
To test this setup, I simulated a simple **Up and Down Counter** project using a 16x2 **I2C LCD** and two **push buttons**.  

🔹 The **white button (pin 12)** increases the count each time it is pressed.  
🔹 The **blue button (pin 13)** decreases the count when pressed.  
🔹 The LCD displays both the **Up Count** and **Down Count** in real time using `setCursor()` and `print()`.  
🔹 Internal pull-up resistors are used for both buttons, making wiring simple and reliable.  

This project helped me understand how to handle **multiple button inputs** and **update LCD displays dynamically**, which is essential for interactive embedded applications. ⚙️🔢📟  

<img width="1920" height="1046" alt="LCD_I2C Up Count and Down Count with Push Buttons" src="https://github.com/user-attachments/assets/e660341f-1c24-4f39-8dea-8c49013d3d1e" />

---

# 🌞📟 Example Project: LDR Sensor with LCD Display
To test this setup, I simulated a **Light Dependent Resistor (LDR)** project.

🔹 The **LDR sensor** detects light intensity when light decreases, its resistance increases.  
🔹 The **LCD display** shows whether the **LED is blinking or not** in real-time.  

This project helped me practice effectively even without access to physical hardware and that’s a **big win** for consistent learning. 🔥

<img width="1920" height="1000" alt="LDR Sensor " src="https://github.com/user-attachments/assets/98d7f731-80bf-4b9b-acb4-97ea29774234" />

---

# 🌊📏 Example Project: Ultrasonic Sensor with LEDs , LCD Display with Buzzer for real world safety system

To test this setup, I simulated an **HC-SR04 Ultrasonic Sensor** project.

🔹 The ultrasonic sensor measures the distance of objects in front of it.  
🔹 LEDs indicate the distance range:
   - 🟡 Yellow LED → Object nearby  
   - 🔴 Red LED → Object very close  
🔹 A buzzer alerts when the object is extremely close.  
🔹 The LCD display shows the real-time distance in centimeters and status messages.

This project allowed me to **practice Arduino programming and sensor integration** effectively, even without physical hardware, making learning both consistent and fun! 🚀

<img width="1920" height="1080" alt="ultrasonic sensor with LCD LED Buzzer" src="https://github.com/user-attachments/assets/419ea59e-a400-4101-894d-dbb08b41ca3a" />

---

# 🌡️ Example Project: DHT22 sensor for measure Temperature & Humidity 

To test this setup, I simulated a project using the **DHT22 sensor** to measure temperature and humidity.

- 🔹 The sensor (pin 13) reads **humidity (%)** and **temperature** in both Celsius and Fahrenheit.  
- 🔹 The program also calculates the **Heat Index** to indicate perceived temperature.  
- 🔹 All readings are displayed in the **Serial Monitor** every 2 seconds.  
- 🔹 The project handles sensor read errors and notifies if reading fails.

This project helped me understand how to interface with digital sensors, process environmental data, and display results via serial communication — key concepts for IoT and weather monitoring systems. ⚙️🌤️

<img width="1920" height="1045" alt="DHT22 meseasure Humidity and Temp" src="https://github.com/user-attachments/assets/8987465e-a116-4cb6-ab5e-1182a2054b52" />

---

# 🖥️Example Project: Display “Hello World” on OLED Screen 
To test this setup, I simulated a simple **OLED Text Display** project using the **Adafruit SSD1306** library. 🖥️✨  

- 🔹 The **128x64 OLED display** is initialized using the I2C communication interface.  
- 🔹 The text size and color are set using `setTextSize()` and `setTextColor()`.  
- 🔹 The message **“Hello World!”** is displayed at the center of the screen using `setCursor()` and `println()`.  
- 🔹 The `display.display()` function updates the screen to show the text.  

This project helped me understand how to **initialize and control OLED displays**, a fundamental skill for creating informative and user-friendly interfaces in embedded systems. ⚙️💬📟  

<img width="1920" height="1040" alt="OLED Hello Worldpng" src="https://github.com/user-attachments/assets/1c50ff1c-c386-4b3e-a645-a20172639971" />

---

# 💡Example Project: Motion Detection System using PIR Sensor and LCD Display
To test this setup, I simulated a simple **Motion Detection System** that uses a **PIR sensor** to detect human movement and an **LED** with **LCD display** to provide visual alerts. 🚶‍♂️💡📟  

- 🔹 The **PIR sensor (pin 2)** continuously monitors for motion in its detection range.  
- 🔹 When **motion is detected**, the sensor outputs HIGH, turning the **LED (pin 13)** ON and displaying **“Motion Detected”** on the LCD.  
- 🔹 When **no motion** is detected, the LED turns OFF and the LCD shows **“No Motion”**, indicating a safe or idle state.  
- 🔹 The system updates every second, providing **real-time monitoring** feedback.  

This project helped me understand how to **interface a PIR sensor** with Arduino and use it for **security or automation systems** — such as automatic lights, smart alarms, or intrusion detection. ⚙️🧠💡  

<img width="1920" height="1040" alt="PIR sensor with LCD and LED detetct Motion" src="https://github.com/user-attachments/assets/c52f1797-edb9-4105-a5d1-d74bbeeecd42" />

---

# Example Project: Joystick Direction Indicator with LEDs 🎮💡🔼🔽⬅️➡️  
To test this setup, I simulated a **Joystick Direction Indicator System** that uses **four LEDs** to visually show the direction of joystick movement.  

- 🔹 The **joystick X-axis (A1)** and **Y-axis (A0)** provide analog input to the Arduino.  
- 🔹 When the joystick is moved **up, down, left, or right**, the corresponding **LED** lights up — giving a clear visual indication of the direction.  
- 🔹 The **center position** (around value 512) keeps all LEDs **off**, indicating a neutral joystick position.  
- 🔹 This simple project demonstrates **analog input reading**, **threshold-based control**, and **digital output indication**.  

This project helped me understand how to **translate analog sensor values into digital actions**, making it a great example of **real-time input visualization** using Arduino. ⚙️🧠✨  

<img width="1920" height="1041" alt="Joystick with 4 LEDs" src="https://github.com/user-attachments/assets/7335e931-ed8b-4a2e-8d59-9dc0ff42e2bb" />

---

# Example Project: DS18B20 Temperature Monitoring System 🌡️📟✨

To test this setup, I built a simple **Temperature Monitoring System** using the **DS18B20 digital temperature sensor and an Arduino**.

- 🔹 The **DS18B20** communicates through the **OneWire** protocol using a single data pin.
- 🔹 The system reads the current temperature in both **Celsius (°C) and Fahrenheit (°F)**.
- 🔹 All temperature values are printed to the **Serial Monitor**, updating every second.
- 🔹 This project demonstrates how to work with **digital sensors, data buses**, and **real-time serial output**.

This project helped me understand how to handle **OneWire communication**, manage **digital temperature data**, and display sensor readings in a clear and real-time manner. A perfect beginner-friendly example of using **external sensors with Arduino**! ⚙️📡🔥

<img width="1920" height="1043" alt="Dallas Temp Sensor" src="https://github.com/user-attachments/assets/35ac46c9-9283-4693-9232-a43d62699ecb" />

---

# Example Project: Touch Sensor Based LED & LCD Display System 👆📟💡

To test this setup, I built a simple Touch Sensor Monitoring System using a capacitive **touch sensor**, Arduino, LED, and I2C LCD display.

- 🔹 The **touch sensor** detects human touch and sends a **digital HIGH** or **LOW** signal to the Arduino.
- 🔹 When a **touch is detected**, the **LED turns ON** and the LCD displays a “Touch Detected” message.
- 🔹 When **no touch is detected**, the **LED turns OFF** and the LCD shows “No Touch”.
- 🔹 The 16×2 I2C LCD is used to display real-time system status clearly.
- 🔹 The system continuously updates the output with a short delay for smooth operation.

This project helped me understand how to work with digital input sensors, control output devices (LEDs), and display real-time status messages on an LCD.
It is a perfect beginner-friendly Arduino project to learn sensor interfacing, conditional logic, and I2C communication. ⚙️📡✨

---

# 🔥 Flame Sensor Based Fire Detection System with LED, Buzzer & LCD 🚨📟💡

To test this setup, I built a simple **Flame Sensor Monitoring System** using a **flame sensor**, Arduino, LED, buzzer, and a 16×2 I2C LCD display.

* 🔹 The **flame sensor** detects the presence of fire and sends a **digital HIGH or LOW** signal to the Arduino.
* 🔹 When **fire is detected**, the **LED turns ON**, the **buzzer sounds**, and the LCD displays **“Fire”**.
* 🔹 When **no fire is detected**, the **LED turns OFF**, the **buzzer stops**, and the LCD shows **“No Fire”**.
* 🔹 The **buzzer** provides an audible alert for immediate warning.
* 🔹 The **16×2 I2C LCD** clearly displays the real-time fire status.
* 🔹 Serial Monitor is used to print **“Fire”** or **“No Fire”** for debugging and monitoring.
* 🔹 The system updates continuously with a short delay for stable output.

This project helped me understand how to work with **digital sensors**, **alert devices (LED & buzzer)**, and **I2C LCD communication**.
It is a **beginner-friendly Arduino safety project** to learn sensor interfacing, conditional logic, and real-time alert systems. ⚙️🔥📡✨

---

## 🧰 Tech Used
| Tool | Purpose |
|------|----------|
| **Visual Studio Code** | Main development environment |
| **PlatformIO IDE** | For Arduino project creation, build, and debug |
| **WOKWI Simulator** | Online simulation of circuits |

---

## 🧑‍💻 Author
**Nadeeshana Lahiru Kavinda**  
📍 Software Specialize Student, at Dept of ICT, Faculty of Technology, South Eastern University of Sri Lanka.
| Embedded Systems | IoT | Software Development Enthusiast | Full Stack Developper 

## 🔗 Connect with Me
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Nadeeshana%20Lahiru-blue?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/nadeeshana-lahiru-kavinda-991645244)

---

## 🏷️ License

This project is licensed under the [MIT License](./LICENSE) - see the LICENSE file for details.


---

## 💬 Community
Have you tried simulating your Arduino projects with **PlatformIO and WOKWI** yet?  
Share your experiences, improvements, or favorite tricks feedback is always welcome! 💬  

---

## 🏁 Final Note
> “When hardware isn’t available, innovation doesn’t stop simulation keeps the learning alive.”  

---
