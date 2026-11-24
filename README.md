# Lesson 07: Dimmable LED Control with Dual Push Buttons 🔆🔘
A practical project demonstrating how to control the brightness of an LED using Pulse Width Modulation (PWM) and two push buttons—one to incrementally increase brightness and the other to dim it down.

## 🛠️ Components Used
- Arduino Uno
- Breadboard
- 1 Red LED
- 2 Push Buttons
- 1 Resistor (220Ω for LED current limiting)
- 2 Resistors (10kΩ pull-up resistors for the push buttons)
- Jumper Wires

## 💡 Logic & Setup
- **PWM Brightness Control:** Utilized `analogWrite(redPin, ledBright)` on PWM-capable pin `10` to smoothly vary LED brightness across the 8-bit analog range (`0` to `255`).
- **Incremental Adjustment:** Used two active-low push buttons (`buttonPin1` on `A1` and `buttonPin2` on `A2`) to increment or decrement `ledBright` by steps of `20` while pressed.
- **Boundary Clamping:** Implemented safety conditional checks (`if (ledBright > 255)` and `if (ledBright < 0)`) to clamp the brightness value within valid PWM limits and prevent integer overflow.
- **Serial Monitoring & Pacing:** Printed real-time button states to the Serial Monitor alongside a `delay(100)` to regulate the dimming speed and provide smooth visual transitions.

## 🎥 Physical Demonstration

---
# Lesson 06: Push Button Toggle Switch (LED State Control) 🔘💡
A practical project demonstrating how to build a software-based toggle switch using a momentary push button and state memory variables, allowing each press-and-release cycle to alternate an LED between ON and OFF states.

## 🛠️ Components Used
- Arduino Uno
- Breadboard
- 1 Red LED
- 1 Push Button
- 1 Resistor (220Ω for LED current limiting)
- 1 Resistor (10kΩ pull-up resistor)
- Jumper Wires

## 💡 Logic & Setup
- **Edge Detection:** Utilized `buttonOld` and `buttonNew` variables to compare the previous and current button states, triggering the action only at the exact moment of button release (`buttonOld == 0 && buttonNew == 1`).
- **State Memory:** Used a tracking variable (`ledState`) to remember whether the LED is currently OFF (`0`) or ON (`1`), flipping its state on each valid press-and-release cycle.
- **Pins Used:** Connected Red LED to digital pin `10` and read the push button signal via analog pin `A1` acting as a digital input (`digitalRead(A1)`).
- **Debouncing:** Added a short `delay(50)` at the end of the loop to filter out mechanical button bounce and prevent multiple unintended toggles.


---
# Lesson 05: Controlling LEDs via Serial Monitor Input 💬
A practical project demonstrating how to read text commands (`String`) from the Arduino Serial Monitor and use conditional `if` statements to selectively turn on one of four LEDs (Red, Green, Blue, and Yellow).

## 🛠️ Components Used
- Arduino Uno
- Breadboard
- 4 LEDs (Red, Green, Blue, Yellow)
- 4 Resistors
- Jumper Wires

## 💡 Logic & Setup
- **Serial User Input:** Utilized `while(Serial.available()==0) {}` to pause program execution until user input is detected, then captured the text command using `Serial.readString()`.
- **Conditional Switching:** Implemented multiple `if` statements (`TheColor == "red"`, `"green"`, `"blue"`, `"yellow"`) to turn `HIGH` the requested LED while ensuring all other LEDs are explicitly set to `LOW`.
- **Pins Used:** Connected Blue LED to pin 9, Green LED to pin 11, Yellow LED to pin 12, and Red LED to pin 13.
- **Variables & Feedback:** Stored prompt messages (`msg`, `msg2`) and user input (`TheColor`) in `String` variables to provide clear interactive feedback on the Serial Monitor.

## 🎥 Physical Demonstration


---
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
