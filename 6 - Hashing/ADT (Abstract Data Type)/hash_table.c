#include <stdio.h>
#include <stdlib.h>

struct itens
{
	int value;
};

struct hash
{
	int qtd, TABLE_SIZE;
	struct itens **item; /* um ponteiro cria o vetor o outro armazena o endereço */
};

typedef struct hash Hash;

Hash *criaHash(int TABLE_SIZE);
void liberaHash(Hash *hash_table);
int valorString(char *str);
int insereHash_semColisao(Hash *hash_table, struct itens *item);
int buscaHash_semColisao(Hash *hash_table, struct itens *item);
int insereHash_enderAberto(Hash *hash_table, struct itens *item);
int buscaHash_enderAberto(Hash *hash_table, struct itens *item);

int main(void)
{
	Hash *hash_table;

	hash_table = criaHash(1427);

	liberaHash(hash_table);

	return 0;
}

Hash *criaHash(int TABLE_SIZE)
{
	Hash *hash_table = (Hash *)malloc(sizeof(Hash));

	if(hash_table != NULL)
	{
		int i;
		hash_table->TABLE_SIZE = TABLE_SIZE;
		hash_table->item = (struct itens **)malloc(TABLE_SIZE * sizeof(struct itens *));

		if(hash_table->item == NULL)
		{
			free(hash_table);
			return NULL;
		}

		hash_table->qtd = 0;
		for(i=0; i<hash_table->TABLE_SIZE; i++)
			hash_table->item[i] = NULL;
	}

	return hash_table;
}

void liberaHash(Hash *hash_table)
{
	if(hash_table != NULL)
	{
		int i;
		for(i=0; i<hash_table->TABLE_SIZE; i++)
		{
			if(hash_table->item[i] != NULL)
				free(hash_table->item[i]);
		}
		free(hash_table->item);
		free(hash_table);
	}
}