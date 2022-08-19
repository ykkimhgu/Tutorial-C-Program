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

int main(int argc, char* argv[])
{

	double x[3] = { 1, 2, 3 };
	int x_size = sizeof(x)/sizeof(double);

	printVec(x, x_size);

}


void printVec(double* vec, int size)
{
	for (int i = 0; i < size; i++)
		printf("Vector[%d] = %.1f \n", i, vec[i]);
	printf("\n");
}