#include <stdio.h>
#include <stdlib.h>

int hash_n(int n);

/**
 * m = hash table length
 * n = the amount of elements
 * 262139
 */
static int *hash_table;
static int n=0, m=16161; //prime number to generate hash table for 100000 elements

int main(void)
{
	int tam, value, consult, i;

	hash_table = malloc(sizeof(int) * m);

	//get amount of elements
	scanf("%d", &tam);

	for(i=0; i<tam; i++)
		hash_table = 0;

	//finding the hash number values
	for(i=0; i<tam; i++)
	{
		scanf("%d", &value);
		hash_table[hash_n(value)] = value;
		n++;
	}

	//consult if value is on hash table
	while(scanf("%d", &consult) != EOF)
	{
		value = hash_n(consult);	
		
		if(hash_table[value] == consult)
			printf("Found it!\n");

		else if(hash_table[value] == 0)
			printf("Doesn't exist!\n");
		
		else if(hash_table[value] != consult)
			printf("Colision!\n");
	}

	return 0;
}

//hash function
int hash_n(int n)
{
    return n % 16161;
}
