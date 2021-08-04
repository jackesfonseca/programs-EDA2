#include <stdlib.h>
#include <stdio.h>

void merge_sort(int vet[], int init, int end);
void merge(int vet[], int init, int mid, int end);
int binary_search(int vet[], int value, int n);

int main(void) {
	int *vet, value, result;
	int n, m, i;

	scanf("%d", &n);

	vet = (int *) malloc(n*sizeof(int));

	//store vector
	for(i=0; i<n; i++)
		scanf("%d", &vet[i]);

	//sorting data
	merge_sort(vet, 0, n-1);

	//search
	while(scanf("%d", &value) != EOF) {
		result = binary_search(vet, value, n);
		if(result == 1) //case true
			printf("sim\n");
		else
			printf("nao\n");
	}
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

int binary_search(int vet[], int value, int n) {
	int init=0, mid=0, end=n-1;

	while(init <= end) {
		mid = (init + end) / 2;

		if(value < vet[mid])
			end = mid - 1;
		else if(value > vet[mid])
			init = mid + 1;
		else 
			return 1;
	}
	return 0;
}