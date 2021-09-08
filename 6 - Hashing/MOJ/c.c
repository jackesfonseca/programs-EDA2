#include <stdio.h>
#include <stdlib.h>

typedef struct aux
{
	int cod;
	int votes;
} Candidate;

void hash_init(Candidate *candidate, int tam);
void merge_sort(Candidate candidate[], int init, int end);
void merge(Candidate candidate[], int init, int mid, int end);
void print_result(Candidate candidate[], int index, int tam);

int main(void)
{
	int senator_quantity, fed_deputy_quantity, st_deputy_quantity, vote, tam = 100000, i, j;
	Candidate *candidate;

	candidate = malloc(sizeof(int) * tam);

	//hash_init(candidate, tam);

	scanf("%d %d %d", &senator_quantity, &fed_deputy_quantity, &st_deputy_quantity);

	/* get input values */
	while(scanf("%d", &vote) != EOF)
	{
		candidate[vote].cod = vote;
		candidate[vote].votes++;
	}
	
	
	/* PRESIDENT */
	merge_sort(candidate, 0, 99);
	
	j=0;
	while(candidate[j].votes == 0)
	    j++;

	for(i=j; i<100; i++)
	    printf("%d: %d %d\n", i, candidate[i].cod, candidate[i].votes);
	    
	printf("\n");
	
	/* SENATOR */
	merge_sort(candidate, 100, 999);
	
	j=100;
	while(candidate[j].votes == 0)
	    j++;

	for(i=j; i<1000; i++)
	    printf("%d: %d %d\n", i, candidate[i].cod, candidate[i].votes);
	    
	printf("\n");
	
	/* FEDERAL DEPUTY */
	merge_sort(candidate, 1000, 9999);
	
	j=1000;
	while(candidate[j].votes == 0)
	    j++;

	for(i=j; i<10000; i++)
	    printf("%d: %d %d\n", i, candidate[i].cod, candidate[i].votes);
	    
	printf("\n");
	
	/* STATE DEPUTY */
	
	merge_sort(candidate, 10000, 99999);
	
	j=10000;
	while(candidate[j].votes == 0)
	    j++;

	for(i=j; i<99999; i++)
	    printf("%d: %d %d\n", i, candidate[i].cod, candidate[i].votes);
	    
	printf("\n");

	return 0;
}

void hash_init(Candidate *candidate, int tam)
{
	int i;

	for(i=0; i<tam; i++)
	{
		candidate[i].cod = 0;
		candidate[i].votes = 0;
	}
}

//sort algorithm
void merge_sort(Candidate candidate[], int init, int end) 
{
	int mid;

	if(init < end) {
		mid = (init + end) / 2;
		merge_sort(candidate, init, mid);
		merge_sort(candidate, mid + 1, end);
		merge(candidate, init, mid, end);
	}
}

void merge(Candidate candidate[], int init, int mid, int end) {
	int com_1 = init, com_2 = mid+1, com_temp=0;
	Candidate *temp;

	temp = malloc((end - init + 1) * (sizeof(Candidate)));
	
	while(com_1<=mid && com_2<=end) {
		if(candidate[com_1].votes <= candidate[com_2].votes) {
			temp[com_temp] = candidate[com_1++];
		}
		else {
			temp[com_temp] = candidate[com_2++];
		}
		com_temp++;
	}
	while(com_1 <= mid) {
		temp[com_temp++] = candidate[com_1++];
	}
	while(com_2 <= end) {
		temp[com_temp++] = candidate[com_2++];
	}
	for(com_temp=init; com_temp<=end; com_temp++) {
		candidate[com_temp] = temp[com_temp-init];
	}
	free(temp);
	
}
