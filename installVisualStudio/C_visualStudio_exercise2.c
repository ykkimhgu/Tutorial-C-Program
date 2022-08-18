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
