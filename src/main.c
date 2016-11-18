
#include "stm32f0xx.h"
#include "serial.h"
//#include <stdio.h>
void delay(int dly) {
	while(dly--);
}
char UserInput[10];
int main() {
	int i = 0;
	initUART(9600);
	while(1) {
		eputs("Hello World\n");
		egets(UserInput, 10);
		eputs("You entered : ");
		eputs(UserInput);
		eputs("\n");
		delay(100000);
	}
	return 0;
}
