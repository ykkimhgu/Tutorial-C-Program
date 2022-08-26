/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C in MSVS2022
Description      : C_malloc2d_example.c
-------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>


// Memory allocation
void createMat(int*** _mat, int _row, int _col);
// Initilization with values
void initMat(int** _mat, int _row, int _col, int _val);
// Print Matrix
void printMat(int** _mat, int _row, int _col);


int main() {

	int initVal = 1;
	int _row = 3;
	int _col = 3;
	int** matA;


	// Memory allocation
	createMat(&matA, _row, _col);

	// Initialization with a value
	initMat(matA, _row, _col, initVal);

	// Print the elements of the matrix
	printMat(matA, _row, _col);

	// Free allocated memory when program ends
	free(matA);

}


void createMat(int*** _mat, int _row, int _col)
{
	*_mat = (int**)malloc(sizeof(int*) * (_row));
	for (int i = 0; i < _row; i++)
		(*_mat)[i] = (int*)malloc(sizeof(int) * (_col));
}

void initMat(int** _mat, int _row, int _col, int _val)
{
	for (int i = 0; i < _row; i++)
	{
		for (int j = 0; j < _col; j++)
			_mat[i][j] = _val;
	}
}

void printMat(int** _mat, int _row, int _col)
{
	for (int i = 0; i < _row; i++)
	{
		for (int j = 0; j < _col; j++) {
			printf("%d\t", _mat[i][j]);
		}
		printf("\n");	
	}
}