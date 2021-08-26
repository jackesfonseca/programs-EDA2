#include <stdio.h>
#include <stdlib.h>


void selection_sort(int vet[], int right, int left);
int less(int current, int smaller);
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

	//after
	for(int i=0; i<10000; i++) {
		printf("%d ", vet[i]);
	}

	printf("\n");

	return 0;
}


void selection_sort(int vet[], int left, int right) {
	if(left == right) {
		return;
	}

	int smaller=left;

	for(int i=left+1; i<right; i++) {

		//compare if currnet value is smaller
		if(less(vet[i], vet[smaller]) == 1) {
			smaller=i;
		}	
	}

	//change values
	exch(vet, left, smaller);

	selection_sort(vet, left+1, right); //recursion call

}

int less(int current, int smaller) {
	//if it's true
	if(current < smaller) {
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