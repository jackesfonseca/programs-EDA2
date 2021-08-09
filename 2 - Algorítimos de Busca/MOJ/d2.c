#include <stdio.h>
#include <stdlib.h>

int binary_search(int vet[], int value, int n);

int main() {
	int *vet, value, result;
	int i, j, m, n;

	scanf("%d %d", &n, &m);

	vet = (int *) malloc(n*sizeof(int));

    //store vector
	for(i=0; i<n; i++) {
		scanf("%d", &vet[i]);
	}

    //consult value
	for(i=0; i<m; i++) {
		scanf("%d", &value);
		
		//binay search
		result = binary_search(vet, value, n);

		printf("%d\n", result);
	}

	return 0;
}

int binary_search(int vet[], int value, int n) {
	int init=0, mid, end=n-1, control=0;

	while(init <= end) {
		mid = (init + end) / 2; 

		if(value < vet[mid]) 
			end = mid - 1; //pega o subvetor à esquerda
		
		else if (value > vet[mid]) 
			init = mid + 1; //pega o subvetor à direita

		else 
		    return mid; //encontrou
	}

	//não encontrou
	if(value > vet[mid]) {
		mid += 1;
		return mid;
	}
	return mid;
}