#include <stdio.h>

typedef struct 
{
	int cod;
	char instruction[20];
}Instructions;

void insertion_sort(Instructions instructions[], int left, int right);

int main() {
	Instructions instructions[50000];
	int consult_cod[50000], cod, tam, i=0, j, flag=0, control=0;

	//get amount of instructions
	scanf("%d", &tam);

	//Read instruction and cods
	while(i<tam) {
		scanf("%d%s", &cod, instructions[i].instruction);
		instructions[i].cod = cod;
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
	insertion_sort(instructions, 0, tam);

	//print results
	for(i=0; i<flag; i++) { //cods
		for(j=0; j<tam; j++) { //consult_cod
			if(consult_cod[i] == instructions[j].cod) {
				printf("%s\n", instructions[j].instruction);
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
void insertion_sort(Instructions instructions[], int left, int right) {
	int temp, i, j;
	//char temp_inst[20];

	for(i=1; i<right; i++) {
		temp = instructions[i].cod;
		//temp_inst = vet_inst[i];
		//move os valores maiores para frente
		for(j=i; (j>0) && (temp<instructions[j-1].cod); j--) {
			instructions[j].cod = instructions[j-1].cod;
			//vet_inst[j] = vet_inst[j-1];
		}
		instructions[j].cod = temp;
		//vet_inst = temp_inst;
	}

}