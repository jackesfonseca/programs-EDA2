#include <stdio.h>
#include <stdlib.h>

typedef struct Character
{
	char c;
	int cod;
}Character;

void hash_init(Character *hash_table, int m);
void print_result(Character *hash_table, int index, int m);

int main(void)
{
	Character *hash_table;
	int m = 126, cod, i=0;
	char c;

	/* starting hash table */
	hash_table = (Character *)malloc(sizeof(Character) * m);
	hash_init(hash_table, m);

	while(scanf("%d %c", &cod, &c) != EOF)
	{
		hash_table[c].cod = cod;
		hash_table[c].c = c;
		i++;
	}

	while(hash_table[i].cod == 0)
		i++;

	print_result(hash_table, i, m);


	return 0;
}

void hash_init(Character *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		//hash_table[i].c = " ";
		hash_table[i].cod = 0;
	}
}

void print_result(Character *hash_table, int index, int m)
{
	int i;

	for(i=index; i<m; i++)
		printf("%d %c\n", hash_table[i].cod, hash_table[i].c);

	//printf("\n");
}