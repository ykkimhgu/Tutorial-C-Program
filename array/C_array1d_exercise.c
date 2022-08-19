/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_array1d_exercise.c
-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printVec(float* _vec, int _row);
// define 'addVec' function

void main()
{
	// Exercise 1 ***********************************************
	printf("Exercise 1\n");

	float x[4] = { 1,2,3,4 };
	float y[4] = { 5,6,7,8 };
	float out[4] = { 0 };
	float out_dotProduct = 0;

	int vecLength = 4;

	addVec(x, y, out, vecLength);
	printf("addVector result (x + y): \n");
	printVec(out, vecLength);

	system("pause");
}

void printVec(float* _vec, int _row)
{
	for (int i = 0; i < _row; i++)
		printf("Vector[%d] = %f \n", i, _vec[i]);
	printf("\n");
}

// define 'addVec' function