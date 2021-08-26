#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int vet[], int left, int right);

int main() {
	int vet[50000], value;
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
	int temp, i, j;

	for(i=1; i<right; i++) {
		temp=vet[i];
		//move os valores maiores para frente
		for(j=i; (j>0) && (temp<vet[j - 1]); j--) {
			vet[j] = vet[j-1];
		}
		vet[j] = temp;
	}

}