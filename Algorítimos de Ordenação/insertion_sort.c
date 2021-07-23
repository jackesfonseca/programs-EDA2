#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int vet[], int left, int right);
void cmpexch(int vet[], int current);

int main() {
	int vet[10];

	//generate vector with random values
	for(int i=0; i<10; i++) {
		vet[i] = random() % 1000;
	}

	//before
	for(int i=0; i<10; i++) {
		printf("%d ", vet[i]);
	}

	printf("\n");

	//sorting data
	insertion_sort(vet, 0, 10);

	//after
	for(int i=0; i<10; i++) {
		printf("%d ", vet[i]);
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