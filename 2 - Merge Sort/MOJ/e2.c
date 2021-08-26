#include <stdio.h>
#include <stdlib.h>

int linear_search(int vet[], int value, int n);

int main() {
	int *vet, value, result;
	int i, j, m, n;

	scanf("%d %d", &n, &m);

	vet = (int *) malloc(n * sizeof(int));

    //storage vector
	for(i=0; i<n; i++) {
		scanf("%d", &vet[i]);
	}

    //consult value
	for(i=0; i<m; i++) {
		scanf("%d", &value);
		result = linear_search(vet, value, n);
		printf("%d\n", result);
	}

	return 0;
}

//linear search
int linear_search(int vet[], int value, int n) {
	int i;
	for(i=0; i<n; i++) {
		if(value == vet[i]){
			return i;
		}
	}
	return -1;
}