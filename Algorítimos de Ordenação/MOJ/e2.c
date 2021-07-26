#include <stdio.h>

void insertion_sort(int vet_cod[], char vet_inst[][20], int left, int right);

int main() {
	int cods[50000], consult_cod[50000], cod, tam, i=0, j, flag=0, control=0;
	char instructions[50000][20];

	//get amount of instructions
	scanf("%d", &tam);

	//Read instruction and cods
	while(i<tam) {
		scanf("%d%s", &cod, instructions[i]);
		cods[i] = cod;
		i++;
	}

	i=0;
	//Read instructions to be consulted
	while(scanf("%d", &cod) != EOF) {
		consult_cod[i] = cod;
		i++;
		flag++;
	}
	
	//sort data
	insertion_sort(cods, instructions, 0, tam);

	//print results
	for(i=0; i<flag; i++) { //cods
		for(j=0; j<tam; j++) { //consult_cod
			if(consult_cod[i] == cods[j]) {
				printf("%s\n", instructions[j]);
				control = 1; //found
			}
		}
		//didn't find
		if(control == 0) {
			printf("undefined\n");
		}
		control = 0;
	}

	return 0;
}

//sorting data
void insertion_sort(int vet_cod[], char vet_inst[][20], int left, int right) {
	int temp_cod, i, j;
	char temp_inst[20];

	for(i=1; i<right; i++) {
		temp_cod = vet_cod[i];
		temp_inst = vet_inst[i];
		//move os valores maiores para frente
		for(j=i; (j>0) && (temp_cod<vet_cod[j - 1]); j--) {
			vet_cod[j] = vet_cod[j-1];
			vet_inst[j] = vet_inst[j-1];
		}
		vet_cod[j] = temp_cod;
		vet_inst = temp_inst;
	}

}