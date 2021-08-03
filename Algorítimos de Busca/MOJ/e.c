#include <stdio.h>
#include <stdlib.h>

int binary_search(int vet[], int value, int n, int m);
void insertion_sort(int vet[], int left, int right);

int main() {
	int *vet, *values, result;
	int i, j, m, n;

	scanf("%d %d", &n, &m);

	vet = (int *) malloc(n * sizeof(int));
	values = (int *) malloc(m * sizeof(int));

    //storage vector
	for(i=0; i<n; i++) {
		scanf("%d", &vet[i]);
	}

    //consult value
	for(i=0; i<m; i++) {
		scanf("%d", &values[i]);
	}

	//sorting data
	insertion_sort(vet, 0, n);

	//binay search
	for(i=0; i<m; i++) {
		result = binary_search(vet, values[i], n, m);
		printf("%d\n", result);
	}

	return 0;
}

//sorting data
void insertion_sort(int vet[], int left, int right) {
	int temp;
	int i, j;

	for(i=1; i<right; i++) {
		temp = vet[i];
		//move os valores maiores para frente
		for(j=i; (j>0) && (temp<vet[j-1]); j--) {
			vet[j] = vet[j-1];
		}
		vet[j] = temp;
	}

}

//binary search
int binary_search(int vet[], int value, int n, int m) {
	int init=0, mid, end=n-1, control=0;

	while(init <= end) {
		mid = (init + end) / 2;

		if(value < vet[mid]) {
			end = mid - 1;
		}
		else if (value > vet[mid]) {
			init = mid + 1;
		}

		else {
		    return mid;
		}
	}
	return -1;
}