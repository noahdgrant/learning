#include "mbed.h"

#define BUTTON_1 p5
#define BUTTON_2 p6
#define BUTTON_3 p7
#define BUTTON_4 p8

#define RED_LED p9
#define YELLOW_LED p10
#define BLUE_LED p11


// Define the Input pins
DigitalIn b1(BUTTON_1);
DigitalIn b2(BUTTON_2);
DigitalIn b3(BUTTON_3);
DigitalIn b4(BUTTON_4);

//Define the Output pins
DigitalOut led_red(RED_LED);
DigitalOut led_yellow(YELLOW_LED);
DigitalOut led_blue(BLUE_LED);

void ControlLED_DigitalIO ();

int main()
{
    while(1) {
        ControlLED_DigitalIO ();
        wait(0.25);
    }
}

void ControlLED_DigitalIO (){
    led_red = (!b4&&(!b3||b2)) || (b4&&b3&&b2&&b1);
    led_yellow = (b4^b3) || (b4&&b3&&b2&&b1);
    led_blue = b4;
}
