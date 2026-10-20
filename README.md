# Lesson 04: Sequential LED Blinking with For Loops 🚦
A practical project demonstrating the use of C++ `for` loops to sequentially blink three LEDs (Yellow, Red, and Blue) a specific number of times.

## 🛠️ Components Used
- Arduino Uno
- Breadboard
- 3 LEDs (Yellow, Red, Blue)
- 3 Resistors 
- Jumper Wires

## 💡 Logic & Setup
- Loop Control: Utilized `for(int j=0; j<times; j=j+1)` to precisely control the exact number of blinks for each LED independently.
- Pins Used: Connected Yellow LED to pin 6, Red LED to pin 9, and Blue LED to pin 10.
- Variables: Declared custom variables (`yellowTimes=6`, `redTimes=9`, `blueTimes=10`, and `delayT=100`) at the top of the sketch to easily adjust the blink counts and speed without modifying the core loops.

## 🎥 Physical Demonstration


---
# Lesson 3: Reading Analog Voltages (Voltage Divider) ⚡📟

## 📝 Project Overview
This project demonstrates how to read analog signals using the Arduino's Analog-to-Digital Converter (ADC). By understanding the concept of a Voltage Divider, we can measure variable voltages and output the real-time calculated values directly to the Serial Monitor.

## 🛠️ Components Used
- Arduino Uno
- Breadboard
- Potentiometer (or fixed Resistors for the voltage divider)
- Jumper Wires

## ⚙️ Circuit & Logic
- The analog pin (`A1`) reads values from `0` to `1023`.
- These raw values are converted into actual voltage (`0V` to `5V`) using floating-point math in C++.


---
# Lesson 02: 4-Bit Binary Counter 🔢
A practical application of digital logic to create a 4-bit binary counter (counting from 0 to 15) using 4 LEDs.

## 💡 Logic & Setup
* **Binary Sequence:** Implemented manual high/low states for binary numbers from `0000` to `1111`.
* **Pins Used:** Connected 4 LEDs to digital pins `13`, `12`, `10`, and `9`.
* **Timing:** Utilized a custom variable (`int waiting = 750;`) to control the delay between each count step uniformly.

## 🎥 Physical Demonstration


---
# Lesson 01: Morse Code SOS LED ⚡

First hands-on project using Arduino Uno to output an S.O.S signal in Morse code using an LED.

## 🎥 Physical Demonstration


## 📝 Logic & Timing
* **Dot (`dot`):** 150ms
* **Dash (`dash`):** 450ms (3x dot duration)
* **Sequence:** S (`...`) -> O (`---`) -> S (`...`)
* **Pause:** Added `delay(1250)` at the end of the sequence before repeating.

## 🚀 Future Refactor
* Optimize code using custom C++ functions (`sendDot()` and `sendDash()`) to reduce repetition.
