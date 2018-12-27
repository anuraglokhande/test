

/* this line is written for git testing
11
22

 */
#include <atmel_start.h>
#include <util/delay.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		_delay_ms(50);
		//USART_0_write(0x31);
		USART_0_write('1');
		_delay_ms(1000);
		_delay_ms(1000);
	}
}
