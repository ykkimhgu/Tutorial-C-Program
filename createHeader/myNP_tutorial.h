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

extern double factorial(double _x);

extern void printVec(double* vec, int row);

#endif