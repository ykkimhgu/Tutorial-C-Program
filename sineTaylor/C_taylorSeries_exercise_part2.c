/*----------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University

Author           : YOUR NAME
Created          : 09-01-2022
Modified         : 09-01-2022
Language/ver     : C in MSVS2022

Description      : C_taylorSeries_part2.c
----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define		PI		3.14159265358979323846264338327950288419716939937510582

#include "../../../include/myNP_tutorial.h"

int main(int argc, char* argv[])
{

	double x = PI / 3;
	//double x = 60;

	double S_N = 0;

	/*===== Select the function to call =====*/
	S_N = sinTaylor(x);
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