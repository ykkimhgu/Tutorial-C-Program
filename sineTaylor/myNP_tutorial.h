/*----------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University

Author           : SSS LAB
Created          : 05-03-2021
Modified         : 08-19-2022
Language/ver     : C++ in MSVS2022

Description      : myNP_tutorial.h
/----------------------------------------------------------------*/

#ifndef		_MY_NP_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NP_H
#define		PI		3.14159265358979323846264338327950288419716939937510582

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// factorial function
extern double factorial(double _x);

// power function
extern double power(double _x, int N);

//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])
extern double sinTaylor(double _x);

// Taylor series approximation for sin(x)  (input unit: [deg])
extern double sindTaylor(double _x);

#endif
