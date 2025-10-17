#  Addressable LED Animation Control with Push Button

##  What It Is
This project — **Addressable LED Animation Control with Push Button** — demonstrates how a simple **momentary push button** can control multiple LED animations on **addressable LEDs (NeoPixels)** using an **Arduino**.  
Each button press cycles through **10 colorful light animations**, making it a fun and interactive way to explore digital input handling and LED programming.

---

##  Why I Made This
I wanted to combine creativity and code — to turn a simple input (a button press) into something visually exciting.  
LED animations always fascinated me, and this project was a perfect hands-on way to understand **how hardware inputs can drive digital art**.  

Plus, it’s an easy, low-cost project that makes learning Arduino **more visual and engaging** for beginners.

---

##  How I Built It
###  Hardware Requirements
- Arduino Uno (or compatible board)  
- **Momentary push button** (input trigger)  
- **NeoPixel LED strip or ring** (16 LEDs recommended)  
- Jumper wires and breadboard  
- Power supply (5V)

###  Wiring Setup
| Component | Arduino Pin | Description |
|------------|--------------|-------------|
| Push Button | Digital Pin 2 (`BUTTON_PIN`) | Connect one side to GND, the other to pin 2 (with internal pull-up) |
| NeoPixel LED Strip | Digital Pin 6 (`PIXEL_PIN`) | Connect DIN of the LEDs here |
| Power | 5V and GND | Shared between Arduino and LED strip |

**NeoPixel Configuration**
- **Pixel Count:** 16  
- **Pixel Type:** `NEO_GRB + NEO_KHZ800` (for standard NeoPixels)  

---

##  Software and Operation
The code uses the **Adafruit NeoPixel Library** (`#include <Adafruit_NeoPixel.h>`).

###  How It Works
1. The system initializes all LEDs to OFF during startup.  
2. When the **push button** is pressed, the Arduino detects a **HIGH → LOW** transition.  
3. A **20ms debounce delay** ensures accurate input detection.  
4. Each valid press increments the `showType` variable.  
5. When `showType` exceeds 9, it resets to 0 — cycling through 10 animations.  
6. The `startShow(showType)` function executes the corresponding LED animation.

###  LED Animation Modes
| Show Type | Function | Description |
|------------|-----------|-------------|
| 0 | `colorWipe(Black)` | Turns all LEDs off |
| 1 | `colorWipe(Red)` | Red color wipe |
| 2 | `colorWipe(Green)` | Green color wipe |
| 3 | `colorWipe(Blue)` | Blue color wipe |
| 4 | `theaterChase(White)` | White chasing lights |
| 5 | `theaterChase(Red)` | Red chasing lights |
| 6 | `theaterChase(Blue)` | Blue chasing lights |
| 7 | `rainbow()` | Smooth rainbow animation |
| 8 | `rainbowCycle()` | Continuous rainbow loop |
| 9 | `theaterChaseRainbow()` | Theater chase with rainbow effect |

---

##  What I Struggled With
- Getting the **button debounce** timing right — too short caused double triggers, too long delayed response.  
- Managing **power draw** from the NeoPixels — learned about using separate 5V supplies for stability.  
- Fine-tuning **color transitions** and timing for smooth animations.  

---

##  What I Learned
- How to use **interrupts and digital input transitions** effectively in Arduino.  
- Implementing **debounce logic** for mechanical buttons.  
- Designing clean, modular code for multiple LED effects.  
- Basics of **hardware–software synchronization** and visual feedback.  

---

##  Future Improvements
- Add a **potentiometer** to control animation speed.  
- Integrate a **GSM/Wi-Fi module** for remote light show triggering.  
- Create a **custom app interface** for mobile LED control.
