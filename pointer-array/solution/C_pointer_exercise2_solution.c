/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_pointer_exercise2_solution.c
-------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int x = 10;
	double y = 2.5;
	
	int* ptrX = &x;
	double* ptrY = &y;

	printf("Print the address of variable x= %x\n", &x);
	printf("Print the value pointed by ptrX = %d\n", *ptrX);
	printf("Print the value of pointer ptrX= %x\n", ptrX);
	printf("Print the address of pointer ptrX= %x\n", &ptrX);
	printf("Print the size of x	 = %d\n", sizeof(x));
	printf("Print the size of pointer ptrX = %d\n\n\n", sizeof(ptrX));

	printf("Print the address of variable y= %x\n", &y);
	printf("Print the value pointed by ptrY = %f\n", *ptrY);
	printf("Print the value of pointer ptrY= %x\n", ptrY);
	printf("Print the address of pointer ptrY= %x\n", &ptrY);
	printf("Print the size of y	  = %d\n", sizeof(y));
	printf("Print the size of pointer ptrY = %d\n\n\n", sizeof(ptrY));

}
