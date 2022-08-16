#include <stdio.h>
#include <stdlib.h>

// Vector addition
void addVec(double _vecA[], double _vecB[], double _vecOut[], int _dim);

int main() {

	// 1D array declaration and definition
	double vecA[] = { 1, 2, 3 };
	double vecB[] = { 10, 20, 30 };
	double vecC[3] = { 0 };

	// Applying 'addVec' function
	addVec(vecA, vecB, vecC, 3);

	// Print result
	for (int i = 0; i < 3; i++)
		printf("%f\t", vecC[i]);
	printf("\n");

	system("pause");
	return 0;
}

// Vector addition
void addVec(double _vecA[], double _vecB[], double _vecOut[], int _dim) {
	for (int i = 0; i < _dim; i++)
		_vecOut[i] = _vecA[i] + *(_vecB + i);		// *(_vecB + i) == _vecB[i]
}
