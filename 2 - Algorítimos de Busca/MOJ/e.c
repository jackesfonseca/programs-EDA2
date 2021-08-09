#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	int index;
};

void merge_sort(struct Node node[], int init, int end);
void merge(struct Node node[], int init, int mid, int end);
int binary_search(struct Node node[], int value, int n);
void print_result(struct Node node[], int n);

int main(void) {
	struct Node *node;

	int *vet, value, result;
	int i, j, m, n;

	scanf("%d %d", &n, &m);

	node = malloc(n * sizeof(node));
	//vet = malloc(n * sizeof(int));

	for(i=0; i<n; i++) {
		scanf("%d", &value);
		node[i].value = value;
		node[i].index = i;
	}

	//sorting data
	merge_sort(node, 0, n-1);

	//print result
	//print_result(node, n);

	//consult value
	for(i=0; i<m; i++) {
		scanf("%d", &value);
		
		//binay search
		result = binary_search(node, value, n);
		printf("%d\n", result);
	}

	free(node);

	return 0;
}

void merge(struct Node node[], int init, int mid, int end) {
	int com_1 = init, com_2 = mid+1, com_temp=0;
	struct Node *temp;

	temp = malloc((end - init + 1) * (sizeof(struct Node)));
	
	while(com_1<=mid && com_2<=end) {
		if(node[com_1].value <= node[com_2].value) {
			temp[com_temp] = node[com_1++];
		}
		else {
			temp[com_temp] = node[com_2++];
		}
		com_temp++;
	}
	while(com_1 <= mid) {
		temp[com_temp++] = node[com_1++];
	}
	while(com_2 <= end) {
		temp[com_temp++] = node[com_2++];
	}
	for(com_temp=init; com_temp<=end; com_temp++) {
		node[com_temp] = temp[com_temp-init];
	}
	free(temp);
	
}

void merge_sort(struct Node node[], int init, int end) {
	int mid;

	if(init < end) {
		mid = (init + end) / 2;
		merge_sort(node, init, mid);
		merge_sort(node, mid + 1, end);
		merge(node, init, mid, end);
	}
}

int binary_search(struct Node node[], int value, int n) {
	int init=0, mid, end=n-1, control=0;

	while(init <= end) {
		mid = (init + end) / 2; 

		if(value < node[mid].value) 
			end = mid - 1; //pega o subvetor à esquerda
		
		else if (value > node[mid].value) 
			init = mid + 1; //pega o subvetor à direita

		else 
		    return node[mid].index; //encontrou
	}

	//não encontrou
	return -1;
}

void print_result(struct Node node[], int n) {
    int i;
	for(i=0; i<n; i++) {
		printf("i antigo = %d, i novo = %d, valor = %d\n", node[i].index, i, node[i].value);
		if(i != n-1) {
			printf(" ");
		}
	}
	printf("\n");
}
