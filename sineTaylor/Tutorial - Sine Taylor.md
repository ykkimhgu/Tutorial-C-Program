# Tutorial - Sine Taylor



## Preparation

1. 1.

   Create a new visual studio project named as “ TU_TaylorSeries” 

2. 2.

   [Download source codes](https://github.com/ykkimhgu/Tutorial-C-Program/tree/main/sineTaylor) :  

   `C_taylorSeries_exercise.c, myNM_tutorial.h,  myNM _tutorial.c`

3. 3.

   Include `myNM_tutorial.h` & `myNM _tutorial.c` in your main source



## Exercise



**Q1 a)** Create  `sinTaylor(x)` that returns the output of sine x, where x is in  [rad].

​     b) Create `sindTaylor(x)` that returns the output of sine x, where x in in [deg].  

****

**Q2.** Create `sinTaylor2(x)` with your own definition of **power() and factorial()** functions



### TIP

![img](https://424033796-files.gitbook.io/~/files/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-MgmrEstOHxu62gXxq1t%2Fuploads%2Fgit-blob-f02657864e0236cd867f18143bce694fa3d5f8d1%2Fimage.png?alt=media)

![img](https://424033796-files.gitbook.io/~/files/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-MgmrEstOHxu62gXxq1t%2Fuploads%2Fgit-blob-fc9f39f7c57142f3f885b35e5eecd3c116e9b692%2Fimage.png?alt=media)



<br>

### Example source code

#### main() code

/*----------------------------------------------------------------\

@ Numerical Programming by Young-Keun Kim - Handong Global University



Author           : SSS LAB

Created          : 05-03-2021

Modified         : 08-30-2021

Language/ver     : C in MSVS2019



Description      : myNM_main.c

----------------------------------------------------------------*/



\#include "myNM.h"



int main(void)

{

​	double d = 45;

​	double x = d * PI / 180;



​	double S_N;



​	/*===== Select the function to call =====*/

​	S_N = sinTaylor(x);

​	//S_N = sindTaylor(d);

​	//S_N = sinTaylor2(x);

​	//S_N = sinTaylor3(x);





​	printf("\n\n");

​	printf("=======================================\n");

​	printf("    sin( %f[rad] ) Calculation   \n", x);

​	printf("=======================================\n");

​	printf("   -  My     result = %3.12f    \n", S_N);

​	printf("   -  Math.h result = %3.12f    \n", sin(x));

​	printf("   -  absolute err. = %3.12f    \n", S_N - sin(x));

​	printf("=======================================\n");



​	system("pause");

​	return 0;

}

## Solution

myNM.h

myNM.c

/*----------------------------------------------------------------\

@ Numerical Methods by Young-Keun Kim - Handong Global University



Author           : SSS Lab

Created          : 05-03-2021

Modified         : 05-03-2021

Language/ver     : C in MSVS2019



Description      : myNM.c

/----------------------------------------------------------------*/



\#include "myNM.h"



// factorial function

double factorial(double _x)

{

​	if (_x <= 1)

​		return 1;

​	else

​		return _x * factorial(_x - 1);

}



//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])

double sinTaylor(double _x) 

{

​	int N_max = 20;

​	double epsilon = 1e-5;



​	double S_N = 0, S_N_prev = 0, rel_chg = 0;

​	int N = 0;



​	do {

​		N++;

​		S_N_prev = S_N;

​		S_N = 0;

​		for (int k = 0; k < N; k++)

​			S_N += pow(-1, k) * pow(_x, 2 * k + 1) / factorial(2 * k + 1);



​		rel_chg = fabs((S_N - S_N_prev) / S_N_prev);



​	} while (N < N_max && rel_chg >= epsilon);



​	return S_N;

}



// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])

double sindTaylor(double _x) 

{

​	return sinTaylor(_x * PI / 180);

}



// Taylor series approximation for sin(x) without using pre-defined functions (input unit: [rad])

double sinTaylor2(double _x) 

{

​	int N_max = 20;

​	double epsilon = 1e-5;



​	double S_N = 0, S_N_prev = 0, rel_chg = 0;

​	int N = 0;



​	do {

​		N++;

​		S_N_prev = S_N;

​		S_N = 0;



​		for (int k = 0; k < N; k++)

​		{

​			//  (-1)^n			

​			int sign_part = 1;

​			for (int i = 1; i <= k; i++)   //sign_part *= -1;

​				sign_part *= -1;



​			//  (x)^n			

​			double pow_part = 1;

​			for (int i = 1; i <= 2 * k + 1; i++)  //pow_part *= _x * _x;

​				pow_part *= _x;



​			// Factorial

​			double fac_part = 1;

​			for (int i = 1; i <= 2 * k + 1; i++)

​				fac_part *= i;



​			S_N += sign_part * pow_part / fac_part;

​		}



​		rel_chg = fabs((S_N - S_N_prev) / S_N_prev);



​	} while (N < N_max && rel_chg >= epsilon);



​	return S_N;

}



// Function that reduced the computation cost of sinTaylor2 (input unit: [rad])

double sinTaylor3(double _x) 

{

​	int N_max = 20;

​	double epsilon = 1e-5;



​	double S_N = 0, S_N_prev = 0, rel_chg = 0;

​	int N = 0;

​		   

​	int sign_part = -1;

​	

​	if (_x==0)

​		return 0;

​	else

​	{	

​		double pow_part = 0;

​		if (_x=!0)		pow_part = 1 / _x;



​		double fac_part = 1;

​		

​		do {

​			N++;

​			S_N_prev = S_N;



​			sign_part *= -1;

​			pow_part *= _x * _x;

​			fac_part = max(fac_part * (2 * N - 2) * (2 * N - 1), 1);

​			S_N += (sign_part * pow_part / fac_part);

​			

​			rel_chg = fabs((S_N - S_N_prev) / S_N_prev);

​			

​		} while (N < N_max && rel_chg >= epsilon);

​	return S_N;

​	}	

}