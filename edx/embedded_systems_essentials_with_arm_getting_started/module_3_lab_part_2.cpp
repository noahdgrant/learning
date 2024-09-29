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

//Define Input/Output buses
BusIn bus_buttons(BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4);
BusOut bus_leds(RED_LED, YELLOW_LED, BLUE_LED);

void ControlLED_BusIO ();

int main()
{
    while(1) {
        ControlLED_BusIO ();
        wait(0.25);
    }
}

void ControlLED_BusIO (){
    switch (bus_buttons){
        case 0 ... 3:
            but_leds=0b0100;
            break;
        case 4 ... 5:
            but_leds=0b0010;
            break;
        case 6 ... 7:
            but_leds=0b0110;
            break;
        case 8 ... 11:
            but_leds=0b0011;
            break;
        case 12 ... 14:
            but_leds=0b0001;
            break;
        case 15:
            but_leds=0b0111;
            break;
        default: ;
    }
}
