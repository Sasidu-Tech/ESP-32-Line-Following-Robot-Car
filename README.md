# 🤖 ESP32 Line Following Robot Car

A smart autonomous **4-wheel Line Following Robot Car** built using **ESP32**, **L298N Motor Driver**, and **IR Sensors**.  
The robot can automatically detect and follow a black line path using two IR sensors and control four DC motors through the L298N motor driver.

---

## 📌 Project Overview

This project is an autonomous robotic vehicle designed to follow a predefined line path.  
The ESP32 microcontroller processes input signals from two IR sensors and controls the motor direction and speed through the L298N motor driver.

This project demonstrates:

- Embedded systems programming
- Motor control
- Sensor interfacing
- Autonomous robotics

---

## ✨ Features

✅ Automatic line tracking  
✅ ESP32 based control system  
✅ 4-wheel drive robot chassis  
✅ Dual IR sensor line detection  
✅ L298N motor driver control  
✅ PWM speed control using ENA & ENB  
✅ 12V battery powered system  
✅ Compact robotic design  

---

## 🛠️ Hardware Components

| Component | Quantity |
|---|---|
| ESP32 DevKit V1 | 1 |
| L298N Motor Driver | 1 |
| IR Line Tracking Sensors | 2 |
| DC Gear Motors | 4 |
| 4 Wheel Robot Chassis | 1 |
| 12V Power Supply/Battery | 1 |
| Jumper Wires | As required |
| Buck Convator | 1 |

---

## 🔌 Pin Configuration

### ESP32 → L298N Motor Driver

| ESP32 Pin | L298N Pin | Function |
|---|---|---|
| GPIO 15 | ENA | Left Motor Speed Control |
| GPIO 2 | IN1 | Left Motor Direction |
| GPIO 4 | IN2 | Left Motor Direction |
| GPIO 16 | IN3 | Right Motor Direction |
| GPIO 17 | IN4 | Right Motor Direction |
| GPIO 19 | ENB | Right Motor Speed Control |

---

### ESP32 → IR Sensors

| ESP32 Pin | Sensor |
|---|---|
| GPIO 34 | Left IR Sensor Output |
| GPIO 35 | Right IR Sensor Output |

---

## ⚡ Power Supply

- Motor Driver Input: **12V DC**
- ESP32 Power: **5V regulated supply**
- Common GND between ESP32 and L298N is required

⚠️ **Do not connect 12V directly to ESP32.**

---

## ⚙️ Working Principle

The two IR sensors continuously detect the black line path.

### Sensor Logic

| Left IR | Right IR | Robot Action |
|---|---|---|
| 0 | 0 | Move Forward |
| 0 | 1 | Turn Left |
| 1 | 0 | Turn Right |
| 1 | 1 | Stop / Adjust |

*(Sensor output logic may change depending on IR module calibration.)*

---

## 🧠 Control Algorithm

1. Read left and right IR sensor values.
2. Compare sensor states.
3. Decide robot movement direction.
4. Send control signals to L298N motor driver.
5. Control motor speed using PWM signals.


---
---

## 🚀 Future Improvements

- Add PID control for smoother and faster line tracking
- Add Bluetooth/WiFi remote control
- Add OLED/LCD display for status monitoring
- Add ultrasonic sensor for obstacle detection
- Improve motor speed optimization
- Add IoT monitoring features

---

---

## 👨‍💻 Developer

**Sasidu-Tech**

Electronics | Arduino | IoT | Robotics

GitHub:

https://github.com/Sasidu-Tech

---

## 📜 License

This project is open-source and available for educational and development purposes.

⭐ If you like this project, consider giving it a star on GitHub.
