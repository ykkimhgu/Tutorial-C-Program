/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : YOUR NAME
Created          : 05-03-2021
Modified         : 05-03-2021
Language/ver     : C in MSVS2019

Description      : myNM.c
/----------------------------------------------------------------*/

#include "myNM_tutorial.h"

double factorial(double _x)
{
	if (_x <= 1)
		return 1;
	else
		return _x * factorial(_x - 1);
}

/*
//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])
double sinTaylor(double _x) 
{
	int N_max = 20;
	double epsilon = 1e-5;

	double S_N = 0, S_N_prev = 0, rel_chg = 0;
	int N = 0;

	do {
		// [TODO] YOUR CODE GOES HERE
		// [TODO] YOUR CODE GOES HERE
		// [TODO] YOUR CODE GOES HERE
		// [TODO] YOUR CODE GOES HERE
		
	} while (N < N_max && rel_chg >= epsilon);

	return S_N;
}

// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])
double sindTaylor(double _x) 
{
	// [TODO] YOUR CODE GOES HERE
}

// Taylor series approximation for sin(x) without using pre-defined functions (input unit: [rad])
double sinTaylor2(double _x) 
{
	// [TODO] YOUR CODE GOES HERE
}
*/
