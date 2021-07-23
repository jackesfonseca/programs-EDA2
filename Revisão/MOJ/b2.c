#include <stdio.h>

int main() {
	int tam, a, sum = 0;

	scanf("%d", &tam);
	
	for(int i=0; i<tam; i++) {
		scanf("%d", &a);
		sum += a;
	}

	printf("%d\n", sum);

	return 0;
}