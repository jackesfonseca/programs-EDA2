#include <stdio.h>
#include <stdlib.h>

void binary_search(int vet[], int value, int n, int m);

int main() {
	int *vet, value;
	int i, j, m, n;
	
	vet = malloc(2000000000);

	scanf("%d %d", &n, &m);

    //storage vector
	for(i=0; i<n; i++) {
		scanf("%d", &vet[i]);
	}

    //consult value
	for(i=0; i<m; i++) {
		scanf("%d", &value);
		
		//binay search
		binary_search(vet, value, n, m);
	}

	return 0;
}

void binary_search(int vet[], int value, int n, int m) {
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
		    printf("%d\n", mid);
	    	control = 1;
	    	break;
		}
	}
	if(control == 0) {
		if(mid == (n - 1)) {
			mid += 1;
			printf("%d\n", mid);
		}
		else {
			printf("%d\n", mid);
		}
	}
	
	control = 0;
}