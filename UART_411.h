//  Subversion $Id: UART_411.h 434 2020-05-03 19:48:17Z UweCreutzburg $
#ifndef _UART_411_h_
#define _UART_411_h_




#define XP1SEL_VAL (BIT2)
#define XP1SEL2_VAL (BIT2)

#define XUCA0CTL1_VAL (UCSSEL_2)

// 1200
//#define XUCA0BR0_VAL (52)
//#define XUCA0BR1_VAL (0)
//#define XUCA0MCTL_VAL (UCBRF_1 + UCBRS_0 + UCOS16)

// 4800
#define XUCA0BR0_VAL (13)
#define XUCA0BR1_VAL (0)
#define XUCA0MCTL_VAL (UCBRF_0 + UCBRS_0 + UCOS16)

#define XUCA0TX_BUFFER_READY (IFG2 & UCA0TXIFG)

#endif
