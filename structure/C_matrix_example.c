/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C in MSVS2022
Description      : C_matrix_example.c
-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double** at;
	int rows;
	int cols;
}Matrix;

Matrix createMat(int _rows, int _cols);


void main() {
	Matrix A, B, C;
	//You can make a matrix of the size you want
	A = createMat(3, 5);
}



Matrix createMat(int _rows, int _cols) {
	
	Matrix Out;

	// 1. allocate row first
	Out.at = (double**)malloc(sizeof(double*) * _rows);

	// 2. allocate column 
	for (int i = 0; i < _rows; i++)
		Out.at[i] = (double*)malloc(sizeof(double) * _cols);

	// 3. Initialize matrix with values
	Out.rows = _rows;
	Out.cols = _cols;

	for (int i = 0; i < _rows; i++)
		for (int j = 0; j < _cols; j++)
			Out.at[i][j] = 0;

	return Out;
}