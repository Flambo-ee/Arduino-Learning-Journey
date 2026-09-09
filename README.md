# Lesson 02: 4-Bit Binary Counter 🔢
A practical application of digital logic to create a binary counter (0 to 15) using 4 LEDs.

**Logic & Setup**
* The counter uses a standard 4-bit binary sequence.
* Delay between counts: `waiting = 750ms`.
* LEDs represent bit values: 1, 2, 4, and 8.

**Physical Demonstration**
*(صورة توصيلة اللمبات الأربع)*

---
# Lesson 01: Morse Code SOS LED ⚡

First hands-on project using Arduino Uno to output an S.O.S signal in Morse code using an LED.

## 🎥 Physical Demonstration
<video src="Lesson_01_Demo.mp4" controls width="100%"></video>

## 📝 Logic & Timing
* **Dot (`dot`):** 150ms
* **Dash (`dash`):** 450ms (3x dot duration)
* **Sequence:** S (`...`) -> O (`---`) -> S (`...`)
* **Pause:** Added `delay(1250)` at the end of the sequence before repeating.

## 🚀 Future Refactor
* Optimize code using custom C++ functions (`sendDot()` and `sendDash()`) to reduce repetition.
