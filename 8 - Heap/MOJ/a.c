#include <stdio.h>

typedef struct Character
{
	char c;
	int cod;
}Character;

void hash_init(Character *hash_table, int m);

int main(void)
{
	Character *hash_table;
	int m = 126;

	hash_init(hash_table, m);

	return 0;
}

void hash_init(Character *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		//hash_table[i].c = "";
		hash_table[i].cod = 0;
	}
}