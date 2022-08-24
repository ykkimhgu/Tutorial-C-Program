#include <stdio.h>
#include <stdint.h>

void dec2bin(unsigned int n);

void main() {
	uint8_t PA;

	//Exercise_1: Turning ON LEDs of Port A(PA)
	//Read PA6, 6th from LSB
	PA = 15;						// b00001111; LED0 is LSB, Set to turn on LED
	uint8_t bits = PA & ________;	// check bit of a6
	printf("ex1: %d\n", bits);

	// Exercise_2: Turning ON LEDs of Port A(PA)
	// assume 8 LEDs are connected to Digital Out pins of PA
	PA = 15;   					// b00001111; LED0 is LSB, Set to turn on LED
	PA |= ____________; 	    // turn ON LED4 
	PA |= ____________; 	    // turn ON LED4 and LED5
	printf("ex2: ");
	dec2bin(PA);

	// Exercise_3: Turning off LEDs of Port A(PA)
	PA = 15;					// b00001111; LED0 is LSB, Set to turn on LED
	PA &= ~(________);          // turn off LED2 
	printf("\nex3: ");
	dec2bin(PA);
}

void dec2bin(unsigned int n) {
	unsigned int a = 0x80;
	for (int i = 0; i < 8; i++) {
		if ((a & n) == a)
			printf("1");
		else
			printf("0");
		a = a >> 1;
	}
}