#include <stdio.h>

int less(int a, int b)
{
	return a < b;
}


int main(void)
{
	int a = 2, b = 1;

	if(less(a, b))
		printf("A é menor do que B\n");
	else
		printf("A é maior do que B\n");

	return 0;
}