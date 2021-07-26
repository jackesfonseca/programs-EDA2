#include <stdio.h>

int main() {
	int cods[1000], consult_cod[1000], cod, tam, i=0, flag=0;
	char instructions[1000][20];

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
	
	//print test
	for(int i=0; i<flag; i++) {
		printf("%d\n", consult_cod[i]);
	}

	return 0;
}

