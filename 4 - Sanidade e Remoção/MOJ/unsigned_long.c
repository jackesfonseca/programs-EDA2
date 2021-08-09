#include <stdio.h>

int main() {
	unsigned long int a, b;

	scanf("%lu", &a);
	scanf(" %lu", &b);

	printf("%lu\n", a);
	printf("%ld\n", b);

	return 0;
}