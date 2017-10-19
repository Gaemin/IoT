# Project 2 

## Internet Button

In Project 1, we learned how to create a '.ino' file and upload it to Photon using terminal. 

In Project 2, we'll add a button to the breadboard that will turn on the LED when pressed. 
We will also explore the ways to publich the action to your Particle console to show the status. 

#### Key Concepts/Components
- **void setup():** all Arduino code must have a setup function defined. This gets run once when the system boots up.

- **void loop():** all Arduino code must also have a loop function defined. After setup is run, this runs as in an infinite loop.

- **pinMode:** tells the device that we'll be using a pin to either gather `INPUT` or provide `OUTPUT`.

- **digitalRead:** takes a digital (binary) reading from the specified pin. This will return `HIGH` or `LOW`.

- **Particle.publish():** Publishes an event to the internet within the Particle ecosystem. This is what we'll use with IFTTT to make the magic happen.

- **delay:** pause the program for the specified number of milliseconds, useful here so the button press is only registered once instead of as many times as the program loop cycles through while the button is pressed.

- **#define:** Lets you define a pre-compilation variable. Great for configuration variables which you know will not change through the life of the program. *Note: don't need a semi-colon after `#define` lines like you do for everything else.*

- **String lightMode; :** This initializes a String variable with the name `lightMode`. Since this is initially defined outside of any function, it is available to use within all functions.
*Note: if you initialize a variable in the `setup` function, you do not have access to it in the `loop` function.*

- **Particle.function("name", function) :** Lets you define a function that can be triggered from the internet. You pass in a `"name"` (used to trigger the function from the web) and a `function` (defines what function is called when this is triggered).

- **led.begin() :** This is a required line of code to initialize the controlling of the LED. Without this, the pinMode will not get set on the LED pin, and it just won't work.

- **led.setPixelColor(pixel, r, g, b) :** Function provided by the Neopixel library. Lets us set the R, G, and B value on a specific pixel. After you set the pixel color, you must call `.show()` to effect the change.

- **void showTheRainbow() :** This is an example of a function which can be called from within other functions (like in the `loop()` function). Organizing code into well named functions is helpful for organizing and understanding what the code does.

- **for(int i = 0; i < 255; i += 10) {...} :** Standard for loop. Defines a variable `i` which starts at 0, runs the code inside the `{}` brackets, then increases `i` by 10 and runs the code again until it is greater than 255.



#### Component Layout

![fritzing-diagram](https://s3.amazonaws.com/vigesharing-is-vigecaring/jsinichko/1329rrwmi.jpg)

![fritzing-diagram-sf](https://gitlab.oit.duke.edu/colabroots/intro-connected-devices/raw/master/fritz-sf.jpg)
