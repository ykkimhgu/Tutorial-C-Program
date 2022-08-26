/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C in MSVS2022
Description      : C_malloc1d.example.c
-------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS

int main() {


	int initVal = 1;
	int _row;
	int* vecC;

	printf("Enter the size of the array you want to create: ");
	scanf("%d", &_row);

	// Memory allocation
	vecC = (int*)malloc(_row * sizeof(int));

	
	// Initialization with a value
	for (int i = 0; i < _row; i++) {
	    vecC[i] = initVal;
	}
	
	// Print the elements of the array
	printf("\nThe elements of the array are: \n");
	for (int i = 0; i < _row; ++i) {
		printf("%d, ", vecC[i]);
	}

	// Free allocated memory when program ends
	free(vecC);

}

