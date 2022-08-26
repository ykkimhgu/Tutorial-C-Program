/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 26-08-2022
Modified         : 26-08-2022
Language/ver     : C++ in MSVS2022
Description      : C_matrix_example2.cpp
-------------------------------------------------------------------------------*/

#include "myMatrix_tutorial.h"

int main()
{
	Matrix A, B, C;

	A = createMat(5, 3);
	initMat(A, 10);
	printMat(A, "A");
	
	B = createMat(5, 3);
	initMat(B, 5);
	printMat(B, "B");
	
	C = addMat(A, B);
	printMat(C, "A + B");

	freeMat(A);
	freeMat(B);
	freeMat(C);

	system("PAUSE");
	return 0;
}