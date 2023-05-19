#include <msp430.h>

extern void blink_led()
{
	WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
	P1DIR = 0x40; // P1.6 output (green LED)
	P1OUT = 0; // LED off

	int i = 20000; // Delay
    while (i != 0) {
        i--; 
    }
	P1OUT ^= 0x40;
}
