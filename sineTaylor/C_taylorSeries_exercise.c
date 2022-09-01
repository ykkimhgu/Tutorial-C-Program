/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : YOUR NAME
Created          : 05-03-2021
Modified         : 05-03-2021
Language/ver     : C in MSVS2019

Description      : myNM_main.c
----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define		PI		3.14159265358979323846264338327950288419716939937510582

double sinTaylor(double _x);
double factorial(double _x);


int main(int argc, char* argv[])
{

	double x = PI / 3;
	
	int N_max = 20;
	double epsilon = 1e-5;

	double S_N = 0, S_N_prev = 0, rel_chg = 0;
	int N = 0;

	/*===== Select the function to call =====*/
	S_N = sinTaylor(x);
	
	
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


//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])
double sinTaylor(double _x)
{
	// Use  pow(x,n)  defined in <math.h>
	// Use  factorial(x)  defined in this source file 
		
	int N_max = 20;
	double S_N = 0;			

	for (int k = 0; k < N_max; k++)		
		// [TODO] add your algorithm here
	
	return S_N;
}


// factorial function
double factorial(double _x)
{
	if (_x <= 1)
		return 1;
	else
		return _x * factorial(_x - 1);
}

	
	
/*
// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])
double sindTaylor(double _x)
{
	// [TODO] add your algorithm here
}
*/
