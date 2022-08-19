/*-------------------------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University
Author           : SSS LAB
Created          : 19-08-2022
Modified         : 19-08-2022
Language/ver     : C in MSVS2022
Description      : C_pointer_example.c
-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int  var = 20;
	double a[4] = { 2, 2, 3, 4 };

	// Pointer Declaration
	int* ptr;
	double* ptr2 = NULL;// good practice for not Addr. assgined pointer
	double* ptr3 = NULL;

	// Pointer Assignment
	ptr = &var;// store address of var in pointer variable
	ptr2 = a;
	ptr3 = &a[0];

	printf("Address of var: %x\n", &var);
	printf("Address of a  : %x\n", &a);
	printf("Address of a[0]: %x\n", &a[0]);

	// Using Pointer - Access the values pointed by Ptr
	printf("\nAddress stored in \n  ptr: %x \n ptr2: %x  \n ptr3: %x\n", ptr, ptr2, ptr3);
	printf("\nValue of \n  *ptr: %d \n *ptr2: %.1f  \n *ptr3: %.1f\n", *ptr, *ptr2, *ptr3);

	system("pause");
	return 0;
}