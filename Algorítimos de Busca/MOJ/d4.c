#include <stdio.h>
#include <stdlib.h>

/**
7 6
1
3
4
7
9
14
20
0
15
3
5
6
21

*/

int binary_search(int vet[], int value, int init, int end);

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
		result = binary_search(vet, value, 0, n);

		printf("%d\n", result);
	}

	return 0;
}

int binary_search(int vet[], int value, int init, int end) {
	int mid = (init + end)/2;

	if(init > end)
		return mid;

	if(vet[mid] == value) 
		return mid;

	if(vet[mid] < value)
		return binary_search(vet, value, mid + 1, end);

	else
		return binary_search(vet, value, init, mid - 1);
}
