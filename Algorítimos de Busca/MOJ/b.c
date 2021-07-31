#include <stdio.h>
#include <stdlib.h>

void merge_sort(int vet[], int init, int end);
void merge(int vet[], int init, int mid, int end);
void print_result(int vet[], int tam);

int main(void) {
	int tam, value, i, *vet;

	scanf("%d", &tam);

	vet = (int *) malloc(tam * sizeof(int));

	for(i=0; i<tam; i++) {
		scanf("%d", &value);
		vet[i] = value;
	}

	merge_sort(vet, 0, tam-1);

	print_result(vet, tam);

	free(vet);

	return 0;
}

void merge(int vet[], int init, int mid, int end) {
	int com_1 = init, com_2 = mid+1, com_temp=0, *temp;

	temp = (int *) malloc((end - init + 1) * (sizeof(int)));
	
	while(com_1<=mid && com_2<=end) {
		if(vet[com_1] <= vet[com_2]) {
			temp[com_temp] = vet[com_1++];
		}
		else {
			temp[com_temp] = vet[com_2++];
		}
		com_temp++;
	}
	while(com_1 <= mid) {
		temp[com_temp++] = vet[com_1++];
	}
	while(com_2 <= end) {
		temp[com_temp++] = vet[com_2++];
	}
	for(com_temp=init; com_temp<=end; com_temp++) {
		vet[com_temp] = temp[com_temp-init];
	}
	free(temp);
	
}

void merge_sort(int vet[], int init, int end) {
	int mid;

	if(init < end) {
		mid = (init + end) / 2;
		merge_sort(vet, init, mid);
		merge_sort(vet, mid + 1, end);
		merge(vet, init, mid, end);
	}
}

void print_result(int vet[], int tam) {
    int i;
	for(i=0; i<tam; i++) {
		printf("%d", vet[i]);
		if(i != tam-1) {
			printf(" ");
		}
	}
	printf("\n");
}