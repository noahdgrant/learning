#include "mbed.h"

#define BUTTON_1 p5
#define BUTTON_2 p6
#define SWITCH_1 p7
#define SWITCH_2 p8

#define LED_1 p9
#define LED_2 p10
#define LED_3 p11
#define LED_4 p12


// Define the Input pins
DigitalIn button_start(BUTTON_1);
DigitalIn button_stop(BUTTON_2);
DigitalIn switch_guard(SWITCH_1);
DigitalIn switch_temp(SWITCH_2);

//Define the Output pins
DigitalOut led_ready(LED_1);
DigitalOut led_running(LED_2);
DigitalOut led_guard_open(LED_3);
DigitalOut led_temp_high(LED_4);

void state_machine();

int main() {
    while (1) {
        state_machine();
        wait_ms(500);
    }
}

void state_machine() {
    enum States {INIT, WAITING, READY, RUNNING, FAULT};
    static enum States state = INIT;

    switch (state) {
        case INIT:
            led_ready = 0;
            led_running = 0;
            led_guard_open = 0;
            led_temp_high = 0;
            state = WAITING;
            break;

        case WAITING:
            led_ready = ~led_ready;
            if (switch_guard == 1 && switch_temp == 0) {
                state = READY;
            }
            break;

        case READY:
            led_ready = 1;
            if (switch_guard == 0 || switch_temp == 1) {
                state = WAITING;
            } else if (button_start == 1) {
                state = RUNNING;
            } else {
                // Nothing
            }
            break;

        case RUNNING:
            led_ready = 0;
            led_running = 1;
            if (switch_guard == 0 || switch_temp == 1) {
                state = FAULT;
            } else if (button_stop == 1) {
                state = INIT;
            } else {
                // Nothing
            }
            break;

        case FAULT:
            led_running = 0;
            if (switch_guard == 0) {
                led_guard_open = 1;
            } else if (switch_temp == 1) {
                led_temp_high = 1;
            } else {
                // Nothing
            }
            state = INIT;
            break;

        default:
            state = INIT;
            break;
    }
}
