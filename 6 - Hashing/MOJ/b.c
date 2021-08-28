#include <stdio.h>
#include <stdlib.h>

typedef struct Count
{
	char ascii;
	int frequency;
} Count;

void hash_init(Count hash_table[], int m);
void print_result(Count hash_table[], int m);

int main(void)
{
	Count *hash_table;
	int n=0, m=128;
	char character;

	//starting hash table
	hash_table = (Count *)malloc(sizeof(Count) * m);
	hash_init(hash_table, m);

	//getting hash table;
	while(scanf("%c", &character) != EOF && character != '\n')
	{
		hash_table[character].ascii = character;
		hash_table[character].frequency++;
	}

	//sorting hash table
	//merge_sort(hash_table, 0, m-1);

	//printing result
	print_result(hash_table, m);

	return 0;
}

void hash_init(Count *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		hash_table[i].ascii = 0;
		hash_table[i].frequency = 0;
    }
}

void print_result(Count hash_table[], int m)
{
	int i=0;

	for(i=0; i<m; i++)
		printf("%d %d\n", hash_table[i].ascii, hash_table[i].frequency);
}