/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C++ in MSVS2022
Description      : myMatrix_exercise.cpp
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


/* After writing the function correctly,
transfer the code below to your 'myMatrix_tutorial.cpp/h' */

Matrix subMat(Matrix _A, Matrix _B)
{
	// 1. Error Check

	// 2. Create Output matrix

	// 3. Calculate

	// 4. Return Output Matrix
}