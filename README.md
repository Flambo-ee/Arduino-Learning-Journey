# Lesson 02: 4-Bit Binary Counter 🔢
A practical application of digital logic to create a 4-bit binary counter (counting from 0 to 15) using 4 LEDs.

## 💡 Logic & Setup
* **Binary Sequence:** Implemented manual high/low states for binary numbers from `0000` to `1111`.
* **Pins Used:** Connected 4 LEDs to digital pins `13`, `12`, `10`, and `9`.
* **Timing:** Utilized a custom variable (`int waiting = 750;`) to control the delay between each count step uniformly.

## 🔌 Physical Demonstration


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
