#include <stdio.h>
#include <stdlib.h>


void selection_sort(int vet[], int right, int left);
int less(int smaller, int current);
void exch(int vet[], int left, int smaller);

int main(void) {
	int vet[10000];

	//generate vector with random values
	for(int i=0; i<10000; i++) {
		vet[i] = random() % 1000;
	}

	//before
	for(int i=0; i<10000; i++) {
		printf("%d ", vet[i]);
	}

	//sorting data
	selection_sort(vet, 0, 10000);

	printf("\n");

	//after
	for(int i=0; i<10000; i++) {
		printf("%d ", vet[i]);
	}

	printf("\n");

	return 0;
}


void selection_sort(int vet[], int left, int right) {
	int smaller;

	for(int i=left; i<right-1; i++) {
		smaller = i;
		for(int j=i+1; j<right; j++) {
			//compare if currnet value is smaller
			if(less(vet[smaller], vet[j])==1) {
				smaller=j;
			}
		}

		//ensure that won't have change of the same position
		if(i != smaller) {
			exch(vet, i, smaller);
		}
	}

}

int less(int smaller, int current) {
	//if it's true
	if(smaller > current) {
		return 1;
	}

	//else
	return 0;
}

void exch(int vet[], int left, int smaller) {
	int temp = vet[left];
	vet[left] = vet[smaller];
	vet[smaller] = temp;
	
}