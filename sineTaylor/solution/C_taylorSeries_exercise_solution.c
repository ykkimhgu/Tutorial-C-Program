/*----------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University

Author           : YOUR NAME
Created          : 09-01-2022
Modified         : 09-01-2022
Language/ver     : C in MSVS2022

Description      : C_taylorSeries_exercise_solution.c
----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define		PI		3.14159265358979323846264338327950288419716939937510582

double factorial(int _x);
double sinTaylor(double _x);
double sindTaylor(double _x);

double power(double _x, int N);
double sinTaylor2(double _x);

int main(int argc, char* argv[])
{

	double x = PI / 3;
	//double x = 60;
	
	double S_N = 0;

	/*===== Select the function to call =====*/
	S_N = sinTaylor2(x);
	//S_N = sindTaylor(x);
	
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

// factorial function
double factorial(int N)
{
	int y = 1;
	for (int k = 2; k <= N; k++)
		y = y * k;

	return y;
}

//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])
double sinTaylor(double _x)
{	
	int N_max = 10;
	double S_N = 0;			

	for (int k = 0; k < N_max; k++)
		S_N = S_N + pow(-1, k) * pow(_x, 2 * k + 1) / factorial(2 * k + 1);
		
	return S_N;
}
	
// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])
double sindTaylor(double _x)
{
	return sinTaylor(_x * PI / 180);
}

// power fuction
double power(double _x, int N)
{
	double y = 1;

	for (int k = 1; k <= N; k++)
		y = y * _x;

	return y;
}


// Taylor series approximation for sin(x) without using pre-defined functions (input unit: [rad])
double sinTaylor2(double _x)
{
	int N_max = 10;
	double S_N = 0;

	for (int k = 0; k < N_max; k++)
		S_N = S_N + power(-1, k) * power(_x, 2 * k + 1) / factorial(2 * k + 1);

	return S_N;
}
