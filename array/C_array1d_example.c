/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_array1d_example.c
-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void printVec(double* _vec, int _row);

int main()
{
	// Static Matrix Allocation  1-D array 
	// fixed array size and initial constant values
	double a[4] = { 1, 2, 3, 4 };
	double b[] = { 2, 3, 4, 5 };
	double c[4] = { 0 };

	// Print 1-D array element
	printVec(a, 4);

	system("pause");
	return 0;
}

void printVec(double* _vec, int _row)
{
	for (int i = 0; i < _row; i++)
		printf("Vector[%d] = %f \n", i, _vec[i]);
	printf("\n");
}