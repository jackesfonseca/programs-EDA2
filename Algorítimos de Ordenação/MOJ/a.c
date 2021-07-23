#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int vet[], int left, int right);

int main(void) {
	int vet[1000], value;
	int tam=0;

	while(scanf("%d", &value) != EOF) {
	    vet[tam] = value;
		tam++;
	}

	bubble_sort(vet, 0, tam);
	
	for(int i=0; i<tam; i++) {
	    printf("%d", vet[i]);
	    if(i < tam-1){
	    	printf(" ");
	    }
	}
	
	printf("\n");

	return 0;
}

void bubble_sort(int vet[], int left, int right) {
    for(int i=0; i<right; i++) {
        //printf("primeiro for\n");
        for(int j=0; j<right-1; j++) {
            //printf("segundo for\n");
            if(vet[j + 1] < vet[j]) {
                //printf("primeiro if\n");
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    
}