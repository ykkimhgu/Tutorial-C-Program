/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C in MSVS2022
Description      : C_malloc1d.example2.c
-------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS


// Memory allocation
void createVec(int** _vec, int _row);
// Initilization with values
void initVec(int* _vec, int _row, int _val);

int main() {

	int initVal = 1;
	int _row;
	int* vecC;

	printf("Enter the size of the array you want to create: ");
	scanf("%d", &_row);

	// Memory allocation
	createVec(&vecC, _row);

	// Initialization with a value
	initVec(vecC, _row, initVal);

	// Print the elements of the array
	printf("\nThe elements of the array are: \n");
	for (int i = 0; i < _row; ++i) {
		printf("%d, ", vecC[i]);
	}

	// Free allocated memory when program ends
	free(vecC);
}

void createVec(int** _vec, int _row)
{
	*_vec = (int*)malloc(_row * sizeof(int));
}

void initVec(int* _vec, int _row, int _val)
{
	for (int i = 0; i < _row; i++)
		_vec[i] = _val;
}