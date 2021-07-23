#include <stdio.h>
#include <stdlib.h>


void selection_sort(int vet[], int right, int left);
int less(int current, int smaller);
void exch(int vet[], int left, int smaller);

int main(void) {
	int vet[1000], value;
	int tam=0;

	while(scanf("%d", &value) != EOF) {
		vet[tam] = value;
		tam++;
	}


	selection_sort(vet, 0, tam);

	for(int i=0; i<tam; i++) {
	    printf("%d", vet[i]);
	    if(i < tam-1){
	    	printf(" ");
	    }
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