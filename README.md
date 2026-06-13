<div align="center">

![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=700&size=22&pause=1000&color=00D9FF&center=true&vCenter=true&width=600&lines=Arduino+Projects+%7C+atul-singh-07;Embedded+Systems+%7C+Sensors+%7C+Actuators;Learning+by+Building+Real+Hardware)

![LANGUAGE](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![PLATFORM](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![STATUS](https://img.shields.io/badge/STATUS-ACTIVE-00d9ff?style=for-the-badge)
![PROJECTS](https://img.shields.io/badge/PROJECTS-08-00ff88?style=for-the-badge)

</div>

---

## `OVERVIEW`

> A hands-on collection of Arduino embedded systems projects —
> built from scratch to understand real hardware, sensors,
> actuators, and hardware-software integration.
> Each project is a step deeper into embedded systems.

```
PLATFORM  : Arduino Uno / Nano
LANGUAGE  : C++ (Arduino Framework)
IDE       : Arduino IDE + VS Code
FOCUS     : Sensors · Actuators · Logic · Control
COMMITS   : 33
```

---

## `PROJECT INDEX`

| # | Project | Hardware Used | Concept |
|---|---|---|---|
| 00 | **Arduino Info** | — | Reference notes & pin mapping |
| 01 | **LED Blink** | LED, Resistor | Digital output, timing |
| 02 | **Traffic Light System** | 3x LEDs | Timed logic sequences |
| 03 | **DHT11 Sensor** | DHT11 | Sensor interfacing, Serial monitor |
| 04 | **RGB LED Control** | RGB LED | PWM signals, color mixing |
| 05 | **Seven Segment Display** | 7-Seg Display | Pin mapping, numeric output |
| 06 | **Servo Motor Control** | SG90 Servo | PWM, angular position control |
| 07 | **Ultrasonic Radar System** | HC-SR04, Servo | Distance sensing + rotation |
| 08 | **Joystick LED Control** | Joystick Module | Analog + digital input reading |

---

## `PROJECT HIGHLIGHTS`

### 📡 07 · Ultrasonic Radar System
```
Most complex project in this collection.
Servo rotates continuously while HC-SR04
measures distance at each angle — outputs
a live radar-style sweep via Processing IDE.

HARDWARE  : Arduino Uno + HC-SR04 + SG90 Servo
SOFTWARE  : Arduino C++ + Processing (visualization)
CONCEPT   : Sensor fusion + motor control + serial comm
```

---

### 🌡️ 03 · DHT11 Temperature & Humidity Sensor
```
Reads real-world environmental data and
displays live temperature + humidity values
over Serial Monitor.

HARDWARE  : Arduino Uno + DHT11 Sensor
LIBRARY   : DHT sensor library
CONCEPT   : Sensor communication, data parsing
```

---

### 🕹️ 08 · Joystick LED Control
```
Reads both analog (X/Y axis) and digital
(button press) signals from a joystick module
to control LED behavior.

HARDWARE  : Arduino Uno + KY-023 Joystick + LEDs
CONCEPT   : Analog input, threshold detection
```

---

## `SKILLS DEMONSTRATED`

```
[✓]  Embedded C++ programming
[✓]  Digital & Analog I/O control
[✓]  PWM signal generation
[✓]  Sensor interfacing (DHT11, HC-SR04)
[✓]  Actuator control (Servo, RGB LED)
[✓]  Serial communication & debugging
[✓]  Hardware circuit design & wiring
[✓]  Multi-component system integration
```

---

## `REPOSITORY STRUCTURE`

```
arduino-projects/
│
├── 00_arduino_info/          # Reference notes & pinout
├── 01_led_blink/             # Digital output basics
├── 02_traffic_light/         # Timed LED sequences
├── 03_dht11_sensor/          # Temperature & humidity
├── 04_rgb_led/               # PWM color control
├── 05_seven_segment_display/ # Numeric display output
├── 06_servo/                 # Servo motor control
├── 07_radar_system/          # Ultrasonic radar sweep
├── 08_joystick_led/          # Joystick input control
│
└── README.md
```

> Each folder contains the `.ino` source file with
> inline comments explaining the logic step by step.

---

## `HOW TO RUN`

```bash
# 1. Clone the repository
git clone https://github.com/atul-singh-07/arduino-projects.git

# 2. Open Arduino IDE

# 3. Navigate to any project folder
File → Open → select the .ino file

# 4. Select board & port
Tools → Board → Arduino Uno
Tools → Port → (your COM port)

# 5. Upload
Click Upload (→) and observe output
```

---

## `LANGUAGES`

```
C++          ████████████████████░   88.8%
Processing   ████░░░░░░░░░░░░░░░░░   11.2%
```

> Processing is used for the **Radar System** visualization (Project 07)

---

## `WHAT'S NEXT`

```
[ ]  Motor driver (L298N) — DC motor speed control
[ ]  I2C LCD display integration
[ ]  IR remote control system
[ ]  OLED display with SSD1306
[ ]  ESP32 WiFi integration → IoT upgrade
[ ]  PID line follower robot
```

---

## `CONNECT`

<div align="center">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/atul-singh-o7)
[![Portfolio](https://img.shields.io/badge/AtulOS-00d9ff?style=for-the-badge&logo=firefox&logoColor=black)](https://atul-singh-07.github.io)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/atul-singh-07)

<sub>Part of the Atulos ecosystem · Built with real hardware · 2025</sub>

</div>
