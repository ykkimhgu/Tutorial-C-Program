/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_array1d_exercise_solution2.c
-------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

	int st[5] = { 1,2,3,4,5 };
	int* ptr;
	
	ptr = &st;
	for (int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr+i));
	}
}