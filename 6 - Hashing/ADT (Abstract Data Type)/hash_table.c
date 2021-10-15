#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct itens
{
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
int valorString(char *str);
int insereHash_semColisao(Hash *hash_table, struct itens item);
int buscaHash_semColisao(Hash *hash_table, int valor, struct itens *item);
int insereHash_enderAberto(Hash *hash_table, struct itens item);
int buscaHash_enderAberto(Hash *hash_table, int valor, struct itens *item);
/* Tratamento de colisões por endereçamento aberto */
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int sondagemQuadratica(int pos, int i, int TABLE_SIZE);
int duploHash(int H1, int chave, int i, int TABLE_SIZE);
/* Funções para calcular valor hash de um item */
int calculaDivisao(int chave, int TABLE_SIZE);
int calculaMultiplicacao(int chave, int TABLE_SIZE);
int calculaDobra(int chave, int TABLE_SIZE);

int main(void)
{
	Hash *hash_table;
	struct itens item, item1, item2, item3, item4, item5;
	struct itens item6, item7, item8, item9, item10;
	int busca, insere;

	item1.valor = 1;
	item2.valor = 22;
	item3.valor = 564;
	item4.valor = 1427;
	item5.valor = 202020;
	item6.valor = 234;
	item7.valor = 7;
	item8.valor = 2021;
	item9.valor = 1111;
	item10.valor = 699;

	hash_table = criaHash(1427);
	
	/* Sem tratamento de colisão 
	insereHash_semColisao(hash_table, item1);
	insereHash_semColisao(hash_table, item2);
	insereHash_semColisao(hash_table, item3);
	insereHash_semColisao(hash_table, item4);
	insereHash_semColisao(hash_table, item5);

	busca = buscaHash_semColisao(hash_table, 1, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_semColisao(hash_table, 22, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_semColisao(hash_table, 564, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_semColisao(hash_table, 1427, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_semColisao(hash_table, 202020, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_semColisao(hash_table, 63, &item);
	printf("%d %d\n", item.valor, busca);
	*/

	/* Com tratamento de colisões */
	insereHash_enderAberto(hash_table, item6);
	insereHash_enderAberto(hash_table, item7);
	insereHash_enderAberto(hash_table, item8);
	insereHash_enderAberto(hash_table, item9);
	insereHash_enderAberto(hash_table, item10);

	busca = buscaHash_enderAberto(hash_table, 234, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_enderAberto(hash_table, 7, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_enderAberto(hash_table, 2021, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_enderAberto(hash_table, 1111, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_enderAberto(hash_table, 699, &item);
	printf("%d %d\n", item.valor, busca);
	busca = buscaHash_enderAberto(hash_table, 777, &item);
	printf("%d %d\n", item.valor, busca);

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

/* Sem tratamento de colisões */
int insereHash_semColisao(Hash *hash_table, struct itens item)
{
	if(hash_table == NULL || hash_table->qtd == hash_table->TABLE_SIZE)
		return 0;

	int chave = item.valor;
	int pos = calculaDivisao(chave, hash_table->TABLE_SIZE);
	struct itens *novo;

	novo = (struct itens *)malloc(sizeof(struct itens));

	if(novo == NULL)
		return 0;

	*novo = item;
	hash_table->item[pos] = novo;
	hash_table->qtd++;
	return 1;
}

/* Com tratamento de colisões */
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

int buscaHash_semColisao(Hash *hash_table, int valor, struct itens *item)
{
	if(hash_table == NULL)
		return 0;

	int pos = calculaDivisao(valor, hash_table->TABLE_SIZE);

	if(hash_table->item[pos] == NULL)
		return 0;

	*item = *(hash_table->item[pos]);

	return 1;
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

/* TRATAMENTO DE COLISÔES */
/* Sondagem Linear (Problema do agrupamento primário) */
int sondagemLinear(int pos, int i, int TABLE_SIZE)
{
	return ((pos + i) & 0x7FFFFFFF ) % TABLE_SIZE;
}

/* Sondagem Quadrática (Problema do agrpamento quadrático) */
int sondagemQuadratica(int pos, int i, int TABLE_SIZE)
{
	pos = pos + 2*i + 5*i*i;
	return (pos & 0x7FFFFFFF) % TABLE_SIZE;
}

/* Duplo Hash - Espalhamento duplo (Diminui problema do agrupamento) */
/*
	CUIDADOS
1 - É necessário que as duas funções hash sejam diferentes
2 - A segunda função hashing não pode resultar em um valor igual a zero (nesse caso não haveria deslocamento)
*/
int duploHash(int H1, int chave, int i, int TABLE_SIZE)
{
	int H2 = calculaDivisao(chave, TABLE_SIZE-1) + 1;
	return ((H1 + i*H2) & 0x7FFFFFFF) % TABLE_SIZE;
}

/* FUNÇÔES HASH */
/* Método da divisão ou Congruência Linear */
int calculaDivisao(int chave, int TABLE_SIZE)
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
	float A = 0.6180339887; /* Constante 0 < A < 1 */
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

/* Tratando string como chave */
int valorString(char *str)
{
	int i, valor = 7;
	int tam = strlen(str);

	for(i=0; i<tam; i++)
		valor = 31 * valor + (int)str[i];

	return valor;
}