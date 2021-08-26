#include <stdio.h>

int main() {
	unsigned long int a, b;

	scanf("%lu", &a);	//get unsigned long int
	scanf(" %lu", &b);

	printf("%lx\n", a); //print in hexadecimal
	printf("%lx\n", b);

	return 0;
}