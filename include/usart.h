
#ifndef __USART_H__
#define __USART_H__

#include <stdint.h>

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

// Define baud rate
#define USART_BAUDRATE 115200   
//#define BAUD_PRESCALE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)
#define BAUD_PRESCALE (uint16_t)( F_CPU / (16.0 * USART_BAUDRATE) - 0.5 )

void usart_init(void);
void usart_blocking_send(unsigned char value);
unsigned char usart_poll(void);

#endif // 