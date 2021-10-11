#include <stdio.h>
#include <stdlib.h>

int hash(int value, int m);
int hash_u(int tam);
void hash_init(int *hash_table, int max);
int hash_count();
int key(int index);
int less(int index_a, int index_b);
int null(int index);
void hash_insert(int value);

/**
 * m = hash table length
 * n = the amount of elements
 * 16161
 */
static int *hash_table;
static int n=0, m=262139; //prime number to generate hash table for 100000 elements

int main(void)
{
	hash_init(hash_table, m);

	//get amount of elements
	

	//finding the hash number values
	

	//consult if value is on hash table
	
	return 0;
}

//hash function
int hash(int value, int m)
{
	//cast to unsigned is to avoid negativy numbers
	/**
	 * 618033 is good to random numbers
	 */
	return ((262139 * (unsigned) value) % m);
}

//universal hash function
int hash_u(int m)
{
	int i, a = 31415, b = 27183;

	for(i=0; *hash_table != '\n'; i++)
	{
		a = a*b % (m-1);
		i = (a*i + *hash_table) % m;
	}

	return i;
}

//return hash key element
int key(int index)
{
	return hash_table[index];
}

//compare two keys
int less(int index_a, int index_b)
{
	return key(index_a) < key(index_b);
}

//verify if is a null item
int null(int index)
{
	int null_item = 0;

	return key(index) == null_item;
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

//insert item to hash table avoiding colisions
void hash_insert(int value)
{
	int index = hash(value, m);

	//linear probing
	while(!null(index))
		index = (index + 1) % m;

	hash_table[index] = value;
	n++;
}

//search for element in hash table
int hash_search(int value)
{
	int index = hash(value, m);

	while(!null(index))
	{
		if(value == key(index))
			return hash_table[index];

		else  
			index = (index + 1) % m;
	}

	//null item
	return 0;
}