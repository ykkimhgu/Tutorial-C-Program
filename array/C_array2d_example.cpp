/*------------------------------------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : Young-Keun Kim
Created          : 01-02-2015
Modified         : 24-02-2017
Language/ver     : C++ in MSVS2013

Description:	 : Static  1D/2D Array  Example for Tutorial 1
------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Commonly used
void printVec(double* _vec, int _row);
void printMat(double(_mat)[3][3], int _row, int _col);  // if array dimension(M,N) is known


// Other options
void printMat2(double(*_mat)[3], int _row, int _col);	 // if array dimension(N) is known
void printMat3(double(_mat)[][3], int _row, int _col);  // if array dimension(M,N) is known


int main()
{
	int val = 1;
	int i, j, k;
	
	/*  Static Vector Allocation:  */
	// 1-D array fixed array size and initial constant values 	
	double a[4] = { 1, 2, 3, 4 };
	// Print 1-D array element		
	printf("\n Printing Vector \n");
	printVec(a, 4);
	

	/* Static Matrix Allocation */
	// 2-D array of fixed array size and initial constant values
	// Declaring & Assigning Array
	int _row = 3, _col = 3;
	double *P[3];
	double A[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 10, 9, 8 } };
				
	// Print 2-D array element		
	printf("\n Printing Matrix \n");

	// Passing 2D to a function
	printMat(A, _row, _col);	
	printMat2(A, _row, _col);	
	printMat3(A, _row, _col);


	// Simple method to access 2-D arrays
	printf("A[i][k] \t \n");
	for (i = 0; i < _row; i++)
	{
		for (k = 0; k < _col; k++)
			printf("A[%d][%d]=%.1f \t", i, k, A[i][k]);
		printf("\n");
	}
	printf("\n\n");


	// Different ways of using 2-D arrays, Note that  a[i]== *(a+i)
	printf("(*(A+i))[k] \t *(A[i])+k \t *(*(A + i))+k \n");
	for (i = 0; i < _row; i++)
	{
		for (k = 0; k < _col; k++)
		{			
			printf("A[%d][%d]=%.1f \t", i, k, (*(A + i))[k]);
			printf("A[%d][%d]=%.1f \t", i, k, *(A[i] + k));
			printf("A[%d][%d]=%.1f \n", i, k, *(*(A + i)) + k);
		}
	}
	printf("\n\n");
	//----------------------------------------------------------------------//

	system("pause");

}

void printVec(double *_vec, int _row)
{
	for (int i = 0; i<_row; i++)
		printf("Vector[%d] = %.1f \n", i, _vec[i]);
	printf("\n");
}

void printMat(double(_mat)[3][3], int _row, int _col)
{
	int i, j;
	for (i = 0; i < _row; i++)
	{
		for (j = 0; j < _col; j++)
			printf("%.1f \t", _mat[i][j]);
		printf("\n");
	}
	printf("\n");
}

void printMat2(double(*_mat)[3], int _row, int _col)
{
	int i, j;
	for (i = 0; i < _row; i++)
	{
		for (j = 0; j < _col; j++)
			printf("%.1f \t", _mat[i][j]);
		printf("\n");
	}
	printf("\n");
}

void printMat3(double(_mat)[][3], int _row, int _col)
{
	int i, j;
	for (i = 0; i < _row; i++)
	{
		for (j = 0; j < _col; j++)
			printf("%.1f \t", _mat[i][j]);
		printf("\n");
	}
	printf("\n");
}