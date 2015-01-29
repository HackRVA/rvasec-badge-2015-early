RVAs4c 2015 Badges, by Hack.RVA
====================

This is the official repository of the RVAs4c 2015 Badges, designed and manufactured by the Richmond VA hackerspace, Hack.RVA.

This year's Badge will features a 32-bit Microchip MCU (PIC32MX250128D), two linear capacitive touch sliders, IR Tx/Rx, USB, and buttons! We are still working out some of the features of the new badge, so we are developing on the 2014 badge for now.

Getting Started Developing for the Badge
---
I'll try to get more detailed instructions soon. But both the compiler and IDE are in the Arch User Repository, which makes it pretty easy. If you are running something else (Windows, Mac, Ubuntu, Fedora, BSD, etc.) and you are able to build this code base, feel free to send me a pull request with directions for the platform.

The basics: 

* Install MPLABX
* Install Microchip MPLAB XC32 Compiler (32 bit C Compiler)
* Clone this repository or download a zip of the source

TODO
---
Look here for ways to help out with software. Some of these are detailed, and some are more abstract problems with the current SW design. Suggestions, ideas, and of course pull requests welcome! Once I get specific issues nailed down, I'll start adding bug/feature requests to Git hub.

* Handle IR Tx/Rx
    * Some of the old code attempted to do this, but I didn't have time in 2014 so it was shorted out of the code. Should consider using BadgeState's IR handler + some single queue of IR messages.
* More Graphics primitives functions
    * Have shitty square and horiz/vert lines drawings. May have full color LCD, so graphics stuff could use a lot of work.
* Standardize the more complex peripheral interfaces
    * Mainly graphics, but a standard message queue could work nicely for IR and future tx/rx (usb? other wire protocol)
* Work with touch sliders
    * The new badge will have the touch sliders attached to the built in capacitive touch HW on the MCU. We should research how this works. Also, getting the 2014 badge without the HW support (cap touch on the wrong ports :( ) working better would also be a plus. I think we can generally skip calibration on startup unless they select to do so.
* Speaker/buzzer driver
    * We'll want to use a timer interrupt. Need to make a nice interface for letting states play sounds easily.
* Will probably have an RGB LED this year, so a nice interface for that. 
    * Obvious start is a 3 param function with r,g,b, but some helper functions to do fading and what not could be useful. A good pwm method would be nice for leds in general.
* Context menu
    * I like the idea of having a menu that's reachable by holding the main button. Make it so states can append extra options to this menu that apply only to the state. But more general seetings could always be adjusted here (sound on off, exit stage/game). I envision it dropping down from the top of the screen, pausing what is behind it.
* Handle user IO more cleanly
    * Currently calling the same function to update I/O, this is perfectly maintainable, but it could probably be done better. Also, the USB stuff in ProcessIO is a mess from the very early days of dev and debug. Really needs to be sorted out.
* Simple stage ideas
    * Space invaders, pong, tetris, etc.
    * I'm toying with the idea of a simple birds eye view 2d game ala pokemon, and you have to find the "stages" or "games" in the virtual game world. A lot more to do before we get to this point, though it's good to be thinking and brainstorming about.
* Consider integration with RVAsec CTF!
    * Puzzles and challenges that requrie some tinkering or hackery

Data Sheets
---
* [Processor: PIC32MX250F128D](http://ww1.microchip.com/downloads/en/DeviceDoc/60001168F.pdf)
* [IR Receiver: VISHAY TSOP39338](http://www.vishay.com/docs/81743/tsop381.pdf)
* [IR Transmit: VISHAY TSKS5400S](http://www.vishay.com/docs/81074/tsks540.pdf)


