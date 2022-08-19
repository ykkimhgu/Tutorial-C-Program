#include <stdio.h>

int main(){

	int st[5] = { 1,2,3,4,5 };
	int* ptr;
	
	ptr = &st;
	for (int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr+i));
	}
}