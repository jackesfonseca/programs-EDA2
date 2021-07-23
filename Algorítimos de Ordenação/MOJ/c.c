#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int vet[], int left, int right);
void cmpexch(int vet[], int current);

int main() {
	int vet[1000], value;
	int tam=0;

	while(scanf("%d", &value) != EOF) {
		vet[tam] = value;
		tam++;
	}


	insertion_sort(vet, 0, tam);

	for(int i=0; i<tam; i++) {
	    printf("%d", vet[i]);
	    if(i < tam-1){
	    	printf(" ");
	    }
	}
	
	printf("\n");

	return 0;
}

//sorting data
void insertion_sort(int vet[], int left, int right) {
	for(int i=0; i<right; i++) {
		for(int j=i; j>left; j--) {
			cmpexch(vet, j);
		}
	}

}

//compare and change values if necessary
void cmpexch(int vet[], int current) {
	if(vet[current] < vet[current-1]) {
		int temp = vet[current];
		vet[current] = vet[current-1];
		vet[current-1] = temp;
	}
}