#include <stdio.h>

int main() {
	char vet[100];
	int l, i=0;

	l = getchar();

	while(l!=EOF && l!='\n') {
		vet[i] = l;
		l = getchar();
		i++;
	}

	vet[i] = '\0';

	printf("%s", vet);

	return 0;
}