/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University
Author           : YOUR NAME
Created          : 05-03-2021
Modified         : 05-03-2021
Language/ver     : C in MSVS2019
Description      : myNM_main.c
----------------------------------------------------------------*/

#include "myNM_tutorial.h"

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


