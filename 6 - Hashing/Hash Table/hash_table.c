#include <stdio.h>
#include <stdlib.h>

int hash_n(int n);
int hash_u(char *hash_table, int tam);
int hash(int n, int m);
void hash_init(int *hash_table, int max);
int hash_count();
int key(int *hash_table, int index);
int less(int index_a, int index_b);
int null(int *hash_table, int index);

/**
 * m = hash table length
 * n = the amount of elements
 * 262139
 */
static int *hash_table;
static int n=0, m=16161; //prime number to generate hash table for 100000 elements

int main(void)
{
	int tam, value, consult, i=0;

	hash_init(hash_table, m);

	//get amount of elements
	scanf("%d", &tam);

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
int hash(int n, int m)
{
	//cast to unsigned is to avoid negativy numbers
	/**
	 * 618033 is good to random numbers
	 */
	return ((16161 * (unsigned) n) % m);
}

int hash_n(int n)
{
    return n % 16161;
}

//universal hash function
int hash_u(char *hash_table, int tam)
{
	int hash, a = 31415, b = 27183;

	for(hash=0; *hash_table != '\n'; hash++)
	{
		a = a*b % (tam-1);
		hash = (a*hash + *hash_table) % tam;
	}

	return hash;
}

//return hash key element
int key(int *hash_table, int index)
{
	return hash_table[index];
}

//compare two keys
int less(int index_a, int index_b)
{
	return key(hash_table, index_a) < key(hash_table, index_b);
}

//verify if is a null item
int null(int *hash_table, int index)
{
	int null_item = 0;

	return key(hash_table, index) == null_item;
}

//initializate the hash table with null
void hash_init(int *hash_table, int max)
{
	int i;

	hash_table = malloc(sizeof(int) * m);

	for(i=0; i<m; i++)
		hash_table[i] = 0;
}

//get amount of elements
int hash_count()
{
	return n;
}