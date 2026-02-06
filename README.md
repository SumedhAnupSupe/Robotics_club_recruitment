# Robotics_club_recruitment

This code controlls the Arduino to switch ON and OFF the light.
The loop keeps on running infinitely in which the ON OFF switching happens
The button state and digitalWrite functions controll the output of the pins.

I have predefined the pins as constants to increase readability of the code.

Working:
    When power is given the button is OFF and the light is OFF.
    If the button is pressed down then in the code it enters the conditional block for flickering the light
    The light Switches ON and OFF at a delay of 1 secound, means ON for 1 secound and OFF for 1 secound
    When the button is switched off then the light stops blinking after the completion of the ongoing loop.
    