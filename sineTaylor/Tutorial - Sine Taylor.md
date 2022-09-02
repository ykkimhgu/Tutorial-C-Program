# Tutorial - Sine Taylor



## Preparation

1. 1.

   Create a new visual studio project named as “ TU_TaylorSeries” 

2. 2.

   [Download source codes](https://github.com/ykkimhgu/Tutorial-C-Program/tree/main/sineTaylor) :  

   `C_taylorSeries_exercise.c, myNP_tutorial.h,  myNP_tutorial.c`

3. 3.

   Include `myNP_tutorial.h` & `myNP_tutorial.c` in your main source



## Exercise



**Q1 a)** Create  `sinTaylor(x)` that returns the output of sine x, where x is in  [rad].

​     b) Create `sindTaylor(x)` that returns the output of sine x, where x in in [deg].  

****

**Q2.** Create `sinTaylor2(x)` with your own definition of **power() and factorial()** functions



### TIP

![image](https://user-images.githubusercontent.com/84503980/188071951-00d2bb3d-735c-40c2-a0ba-85a5cc88bf9d.png)

![image](https://user-images.githubusercontent.com/84503980/188072025-424bab29-036a-4b09-81d3-61f1c61916e5.png)


<br>

### Example source code

#### main() code

/*----------------------------------------------------------------\

@ Numerical Programming by Young-Keun Kim - Handong Global University



Author           : SSS LAB

Created          : 05-03-2021

Modified         : 09-02-2022

Language/ver     : C in MSVS2022



Description      : C_taylorSeries_exercise.c

----------------------------------------------------------------*/



#include "../../../include/myNP_tutorial.h"



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

myNP_tutorial.h

myNP_tutorial.c

/*----------------------------------------------------------------\

@ Numerical Methods by Young-Keun Kim - Handong Global University



Author           : SSS Lab

Created          : 05-03-2021

Modified         : 09-02-2022

Language/ver     : C in MSVS2022



Description      : myNP_tutorial.c

/----------------------------------------------------------------*/



\#include "myNP_tutorial.h"



// factorial function

double factorial(double _x)

{

​	int y = 1;

​	for (int k = 2; k <= N; k++)

​	   y = y * k;

​	return y;

}



//  Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])

double sinTaylor(double _x)

{
​	int N_max = 10;

​	double S_N = 0;

​	for (int k = 0; k < N_max; k++)

​		S_N = S_N + pow(-1, k) * pow(_x, 2 * k + 1) / factorial(2 * k + 1);

​	return S_N;

}



// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])

double sindTaylor(double _x) 

{

​	return sinTaylor(_x * PI / 180);

}


// power fuction
double power(double _x, int N)

{

​	double y = 1;

​	for (int k = 1; k <= N; k++)

​			y = y * _x;

​	return y;

}


// Taylor series approximation for sin(x) without using pre-defined functions (input unit: [rad])
double sinTaylor2(double _x)

{

​	int N_max = 10;

​	double S_N = 0;

​	for (int k = 0; k < N_max; k++)

​	   S_N = S_N + power(-1, k) * power(_x, 2 * k + 1) / factorial(2 * k + 1);

​	return S_N;

}
