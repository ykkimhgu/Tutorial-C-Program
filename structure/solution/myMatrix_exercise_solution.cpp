/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C++ in MSVS2022
Description      : myMatrix_exercise_solution.cpp
-------------------------------------------------------------------------------*/

#include "myMatrix_tutorial.h"

// Create your Matrix substraction Function
Matrix subMat(Matrix _A, Matrix _B);

int main()
{
	Matrix A, B, C;

	A = createMat(5, 3);
	initMat(A, 12);
	printMat(A, "A");

	B = createMat(5, 3);
	initMat(B, 5);
	printMat(B, "B");

	C = subMat(A, B);
	printMat(C, "A - B");

	freeMat(A);
	freeMat(B);
	freeMat(C);

	system("PAUSE");
	return 0;
}

// Transfer the code below to your 'myMatrix_tutorial.cpp/h'
Matrix subMat(Matrix _A, Matrix _B)
{
	if (_A.rows != _B.rows || _A.cols != _B.cols) {
		printf("\n  ERROR!!: dimension error at 'addMat' function");
		return createMat(0, 0);
	}

	Matrix Out = createMat(_A.rows, _B.cols);
	for (int i = 0; i < _A.rows; i++)
		for (int j = 0; j < _B.cols; j++)
			Out.at[i][j] = _A.at[i][j] - _B.at[i][j];

	return Out;
}