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
/* funções para calcular valor hash de um item */
int chaveDivisao(int chave, int TABLE_SIZE);
int calculaMultiplicacao(int chave, int TABLE_SIZE);
int calculaDobra(int chave, int TABLE_SIZE);

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

/* Método da divisão ou Congruência Linear */
int chaveDivisao(int chave, int TABLE_SIZE)
{
	/* 
	& - Operação bit a bit
	0x7FFFFFFF - Maior inteiro 32 bits (evitar overflow)
	% TABLE_SIZE - Garante que o código hash estará entre 0 e o valor de HASH_TABLE
	*/
	return (chave & 0x7FFFFFFF) % TABLE_SIZE; 
}

/* Método da multiplicação ou congruência linear multiplicativo */
int calculaMultiplicacao(int chave, int TABLE_SIZE)
{
	float A = 0.6180339887 /* Constante 0 < A < 1 */
	float val = chave * A;
	val = val - (int)val;
	return (int)(TABLE_SIZE * val);
}

/* Método da Dobra */
int calculaDobra(int chave, int TABLE_SIZE)
{
	/*
	>> - Desloca a b bits à direita
	^ - Ou exclusivo
	*/
	int num_bits = 10;
	int parte1 = chave >> num_bits;
	int parte2 = chave & (TABLE_SIZE-1);

	return parte1 ^ parte2;
}