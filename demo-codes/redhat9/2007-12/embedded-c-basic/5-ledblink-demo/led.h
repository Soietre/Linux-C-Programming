#ifndef LED_H
#define LED_H

#define SYSCFG      	0x03FF0000
 
#define IOPMOD		(SYSCFG+0x5000)
#define IOPDATA		(SYSCFG+0x5008)

#define REG(x)		(*((volatile unsigned int *) (x)))

#define R_IOPMOD	REG(IOPMOD)
#define R_IOPDATA	REG(IOPDATA)

#define LED0		(0x1 << 6)
#define LED1		(0x1 << 5)
#define LED2		(0x1 << 4)
#define LED3		(0x1 << 17)
#define LED_ALL		(LED0 | LED1 | LED2 | LED3)

void led_on(int);
void led_off(int);

int led_running_horse(void);
int led_two_blink(void);

#endif
