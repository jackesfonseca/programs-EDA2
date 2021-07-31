#include <stdio.h>

typedef struct 
{
	int cod;
	char instruction[20];
}Instructions;

void insertion_sort(Instructions instructions[], int left, int right);
void binary_search(Instructions instructions[], int consult_cod[], int tam, int flag);

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

	//binary search
	binary_search(instructions, consult_cod, tam, flag);

	return 0;
}

//sorting data
void insertion_sort(Instructions instructions[], int left, int right) {
	Instructions temp;
	int i, j;

	for(i=1; i<right; i++) {
		temp = instructions[i];
		//move os valores maiores para frente
		for(j=i; (j>0) && (temp.cod<instructions[j-1].cod); j--) {
			instructions[j] = instructions[j-1];
		}
		instructions[j] = temp;
	}

}

//Binary search
void binary_search(Instructions instructions[], int consult_cod[], int tam, int flag) {
    int init=0, end=tam-1, mid, control=0;
    int i=0, j=0;
    
    //control consult_cod[] index
    for(i=0; i<flag; i++){
        //control instructions[].cod index
        while(init <= end) {
            mid = (init + end) / 2;
        
            //smaller
            if(consult_cod[i] < instructions[mid].cod) {
                end = mid - 1;
            }
        
            //bigger
            else if(consult_cod[i] > instructions[mid].cod) {
                init = mid + 1;
            }
        
            //found
            else {
                printf("%s\n", instructions[mid].instruction);
                control = 1;
                break;
            }
        }
        if(control == 0) {
            printf("undefined\n");
        }
        
        //Reset variables
        init=0; 
        end=tam-1;
        control = 0;
    }
}