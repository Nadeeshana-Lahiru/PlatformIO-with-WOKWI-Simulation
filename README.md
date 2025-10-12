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

## 🌞📟 Example Project: LDR Sensor with LCD Display
To test this setup, I simulated a **Light Dependent Resistor (LDR)** project.

🔹 The **LDR sensor** detects light intensity when light decreases, its resistance increases.  
🔹 The **LCD display** shows whether the **LED is blinking or not** in real-time.  

This project helped me practice effectively even without access to physical hardware and that’s a **big win** for consistent learning. 🔥

<img width="1920" height="1000" alt="LDR Sensor " src="https://github.com/user-attachments/assets/98d7f731-80bf-4b9b-acb4-97ea29774234" />

---

🌊📏 Example Project: Ultrasonic Sensor with LEDs , LCD Display with Buzzer for real world safety system

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
