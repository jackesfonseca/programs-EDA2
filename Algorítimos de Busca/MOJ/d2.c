#include <stdio.h>

void binary_search(int vet[], int value, int n, int m);

int main() {
	int vet[10000000000], value;
	int n, m, i=0, j=0;

	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++) {
		scanf("%d", &vet[i]);
	}

	for(j=0; j<m; j++) {
		scanf("%d", &value);
		binary_search(vet, value, n, m);
	}

	return 0;
}

void binary_search(int vet[], int value, int n, int m) {
	int init=0, mid, end=n-1;
	int i, control = 0;

	while(init <= end) {
		mid = (init + end) / 2;

		//smaller
		if(value < vet[mid]) {
		end = mid - 1;
		}

		//bigger
		else if(value > vet[mid]) {
			init = mid + 1;
		}

		//found 
		else {
			printf("%d\n", mid);
			control = 1; //found
			break;
		}
	}
	if(control == 0) {
	    if(mid == (n-1)){
		    printf("%d\n", n);
	    }
		else {
		    printf("%d\n", mid);
		
		}
	}

	//reset variables
	control = 0;
	init = 0;
	end = n-1;
}