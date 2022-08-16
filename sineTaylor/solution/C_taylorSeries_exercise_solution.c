/*----------------------------------------------------------------\
@ Numerical Programming by Young-Keun Kim - Handong Global University

Author           : SSS LAB
Created          : 05-03-2021
Modified         : 08-30-2021
Language/ver     : C in MSVS2019

Description      : myNM_main.c
----------------------------------------------------------------*/

#include "myNM_tutorial.h"

int main(void)
{
	double d = 45;
	double x = d * PI / 180;

	double S_N;

	/*===== Select the function to call =====*/
	S_N = sinTaylor(x);
	S_N = sindTaylor(d);
	
	//S_N = sinTaylor2(x);
	//S_N = sinTaylor3(x);


	printf("\n\n");
	printf("=======================================\n");
	printf("    sin( %f[rad] ) Calculation   \n", x);
	printf("=======================================\n");
	printf("   -  My     result = %3.12f    \n", S_N);
	printf("   -  Math.h result = %3.12f    \n", sin(x));
	printf("   -  absolute err. = %3.12f    \n", S_N - sin(x));
	printf("=======================================\n");

	system("pause");
	return 0;
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
		N++;
		S_N_prev = S_N;
		S_N = 0;
		for (int k = 0; k < N; k++)
			S_N += pow(-1, k) * pow(_x, 2 * k + 1) / factorial(2 * k + 1);

		rel_chg = fabs((S_N - S_N_prev) / S_N_prev);

	} while (N < N_max && rel_chg >= epsilon);

	return S_N;
}
*/

/*
// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])
double sindTaylor(double _x)
{
	return sinTaylor(_x * PI / 180);
}
*/