/*----------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University

Author           : SSS LAB
Created          : 05-03-2021
Modified         : 08-19-2022
Language/ver     : C++ in MSVS2022

Description      : myNP_tutorial.c
/----------------------------------------------------------------*/

#include "myNP_tutorial.h"


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
	// [TODO] add your algorithm here
}