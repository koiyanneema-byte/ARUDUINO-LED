Addressable LED Animation Control with Push Button
This project provides a demonstration of how to use an input device, specifically a momentary push button, to trigger changes on addressable LEDs (NeoPixels). Each press of the button cycles the display to a new LED animation.
Features and Functionality
• Animation Cycling: The code cycles through 10 distinct light shows (indexed 0 through 9) using the showType variable. When showType reaches 9, it resets to 0.
• Input Handling: Animation changes are triggered by detecting a change in button state from high to low (a button press). This logic executes on a high → low transition.
• Debouncing: A short delay of 20 milliseconds is implemented to debounce the button input, ensuring reliable transition detection.
• LED/Pixel Control: The project uses the Adafruit_NeoPixel library to execute various programmed animations, including colorWipe, theaterChase, and rainbow effects.
Hardware and Wiring Setup
Requirements
This project requires an input button and a strip of NeoPixels (or compatible addressable LEDs).
Wiring Instructions
Component
Connection Pin
Details
Push Button
Digital IO Pin 2 (BUTTON_PIN)
Wire the momentary push button to connect from ground to this digital IO pin. The pin is driven with a pull-up resistor, and the button press pulls the pin to ground momentarily.
Addressable LEDs
Digital IO Pin 6 (PIXEL_PIN)
This is the Digital IO pin connected to the NeoPixels.
NeoPixel Configuration Details
The code defines the parameters for the specific type of addressable LED strip being used:
• Pixel Count: 16 pixels (PIXEL_COUNT).
• Pin: Pin 6 (PIXEL_PIN).
• Pixel Type Flags: NEO_GRB + NEO_KHZ800. This configuration specifies that the pixels are wired for the GRB bitstream (correct for a NeoPixel stick) and use the 800 KHz bitstream (correct for High Density LED strip/NeoPixel stick).
Software Requirements
The code requires the Adafruit NeoPixel Library (#include <Adafruit_NeoPixel.h>).
Operation
Upon startup, the setup routine initializes the strip using strip.begin() and sets all pixels to 'off' (strip.show()).
1. To begin the sequence, the user needs to press the button once to start the first animation.
2. The main loop constantly checks the current button state (newState).
3. When a press (high to low transition) is detected and confirmed after the 20ms debounce delay, the system increments the showType variable.
4. The system cycles through shows 0 to 9, resetting to 0 when 9 is exceeded (if (showType > 9) showType=0;).
5. The startShow() function is then called with the new showType value, executing the corresponding LED animation.
LED Animation Modes
The code cycles through 10 distinct light shows defined in the startShow function, using various LED animation techniques:
Show Type
Function Called
Description (LED Animation)
0
colorWipe
Black/off.
1
colorWipe
Red color wipe animation.
2
colorWipe
Green color wipe animation.
3
colorWipe
Blue color wipe animation.
4
theaterChase
White/dim theater-style crawling lights.
5
theaterChase
Red theater-style crawling lights.
6
theaterChase
Blue theater-style crawling lights.
7
rainbow
Standard rainbow effect animation.
8
rainbowCycle
Rainbow effect where the colors are equally distributed throughout the strip.
9
theaterChaseRainbow
Theater-style crawling lights combined with a rainbow effect.
