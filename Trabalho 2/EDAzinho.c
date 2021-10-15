#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

/*
	sondagem L' C' P
	dominacao P
*/

struct itens
{
	int row;
	int column;
	int valor;
};

struct hash
{
	int qtd, TABLE_SIZE;
	struct itens **item; /* um ponteiro cria o vetor o outro armazena o endereço */
};

typedef struct hash Hash;

Hash *criaHash(int TABLE_SIZE);
void liberaHash(Hash *hash_table);
int insereHash_enderAberto(Hash *hash_table, struct itens item);
int buscaHash_enderAberto(Hash *hash_table, int valor, struct itens *item);
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int calculaDivisao(int chave, int TABLE_SIZE);
 
int main(void)
{
	int d, p_d, t_game, m, score; /* game score */
	int row, column, p_i, t_loop; /* start game data */
	Hash *hash_table;
	int TABLE_SIZE = 262139;
	struct timeval start, end; 
	double program_time_t, program_time_s, program_time_m;
	char command[256];

	hash_table = criaHash(TABLE_SIZE);

	scanf("%d %d %d %d", &row, &column, &p_i, &t_loop);

	gettimeofday(&start, NULL);

	while(t_loop >= 0)
	{


		t_loop--;
	}

	gettimeofday(&end, NULL);

	program_time_s = end.tv_sec - start.tv_sec;
	program_time_m = (end.tv_usec - start.tv_usec) / 1000000.0;
	program_time_t = program_time_m + program_time_s;

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

int insereHash_enderAberto(Hash *hash_table, struct itens item)
{
	if(hash_table == NULL || hash_table->qtd == hash_table->TABLE_SIZE)
		return 0;

	int chave = item.valor;
	int i, pos, new_pos;
	pos = calculaDivisao(chave, hash_table->TABLE_SIZE);

	for(i=0; i<hash_table->TABLE_SIZE; i++)
	{
		new_pos = sondagemLinear(pos, i, hash_table->TABLE_SIZE);
		if(hash_table->item[new_pos] == NULL)
		{
			struct itens *novo;
			novo = (struct itens *)malloc(sizeof(struct itens));

			if(novo == NULL)
				return 0;

			*novo = item;
			hash_table->item[new_pos] = novo;
			hash_table->qtd++;

			return 1;
		}
	}

	return 0;
}

int buscaHash_enderAberto(Hash *hash_table, int valor, struct itens *item)
{
	if(hash_table == NULL)
		return 0;

	int i, pos, new_pos;
	pos = calculaDivisao(valor, hash_table->TABLE_SIZE);

	for(i=0; i<hash_table->TABLE_SIZE; i++)
	{
		new_pos = sondagemLinear(pos, i, hash_table->TABLE_SIZE);

		if(hash_table->item[new_pos] == NULL)
			return 0;

		if(hash_table->item[new_pos]->valor == valor)
		{
			*item = *(hash_table->item[new_pos]);
			return 1;
		}
	}

	return 0;
}

int sondagemLinear(int pos, int i, int TABLE_SIZE)
{
	return ((pos + i) & 0x7FFFFFFF ) % TABLE_SIZE;
}

int calculaDivisao(int chave, int TABLE_SIZE)
{
	return (chave & 0x7FFFFFFF) % TABLE_SIZE; 
}