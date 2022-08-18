/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_visualStudio_exercise2.c
-------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
	int a = 0, b = 0;
	int sum = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
	printf("Thank you!");

	return 0;
}
