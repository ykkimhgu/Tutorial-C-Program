#include <stdio.h>

void main(){
	char a[10];
	char* ptr;

	// Print  alphabet small letter  a to j as ASCII code
	for (int i = 0; i <10; i++) {
		a[i] = 97 + i;
		printf("%c\n", a[i]);
	}
		
	// Replace  'a' by 'A' and 'd' by 'D' 
	ptr = a;
	*ptr = 'A';

	ptr += 3;
	*ptr = 'D';

	// Should Print as 'AbcDefghij'
	for (int i = 0; i < 10; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
}

