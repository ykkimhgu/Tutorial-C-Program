/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 10-05-2021
Modified         : 19-08-2022
Language/ver     : C++ in MSVS2022
Description      : TU_createHeader_main.cpp
-------------------------------------------------------------------------------*/

#include "stdio.h"
#include "stdlib.h"

// Include path will be included at the end of tutorial
// #include "myNP_tutorial.h"


void printVec(double* vec, int row);
void addVec(double A[], double B[], double C[], int size);

int main(int argc, char* argv[])
{

	// PART 1
	printf("\n**************************************************");
	printf("\n|                     PART 1.                    |");
	printf("\n**************************************************\n");

	double x[3] = { 1, 2, 3 };
	int x_size = sizeof(x)/sizeof(double);

	printVec(x, x_size);


	// Part 2
	printf("\n**************************************************");
	printf("\n|                     PART 2.                    |");
	printf("\n**************************************************\n");

	double A[5] = { 10, 20, 30, 40, 50 };
	double B[5] = { 1, 2, 3, 4, 5 };

	double C[5] = {};
	addVec(A, B, C, 5);
	printVec(C, 5);

	system("pause");
	return 0;
}


void printVec(double* vec, int size)
{
	for (int i = 0; i < size; i++)
		printf("Vector[%d] = %.1f \n", i, vec[i]);
	printf("\n");
}

void addVec(double A[], double B[], double C[], int size)
{
	for (int i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}