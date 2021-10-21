#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 262139

/*
	sondagem L' C' P
	dominacao P
*/

struct mat
{
	int pontuacao;
	int row;
	int column;
	char tipo;
};

struct hash
{
	int qtd, TABLE_SIZE;
	struct mat **item; /* um ponteiro cria o vetor o outro armazena o endereço */
};

struct fila_prioridade
{
	int qtd;
	struct mat dados[MAX];
};

typedef struct fila_prioridade FilaPrio;
typedef struct mat Matriz;
typedef struct hash Hash;

Hash *criaHash(int TABLE_SIZE);
void liberaHash(Hash *hash_table);
int insereHash_enderAberto(Hash *hash_table, struct mat item);
int buscaHash_enderAberto(Hash *hash_table, int valor, struct mat *item);
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int calculaDivisao(int chave, int TABLE_SIZE);
FilaPrio* cria_FilaPrio();
void libera_FilaPrio(FilaPrio *fp);
int estaCheia_FilaPrio(FilaPrio *fp);
int estaVazia_FilaPrio(FilaPrio *fp);
int insere_FilaPrio(FilaPrio *fp, struct mat item, int prio);
void promoverElemento(FilaPrio *fp, int filho);
int remove_FilaPrio(FilaPrio *fp);
void rebaixarElemento(FilaPrio *fp, int pai);
int consulta_FilaPrio(FilaPrio *fp);
 
int main(void)
{
	int row, column, p_i, t_loop; /* valores iniciais */
	Hash *hash_table;
	FilaPrio *fp;
	struct mat item;
	int TABLE_SIZE = 262139, EDAzinhos = 1, flag = 1, consulta, i, j, l, c;
	char command[256];

	hash_table = criaHash(TABLE_SIZE);
	fp = cria_FilaPrio();


	scanf("%d %d %d %d", &row, &column, &p_i, &t_loop); /* lê dados iniciais*/
	item.row = row;
	item.column = column;
	item.p_i = p_i;
	item.tipo = 'D';

	insereHash_enderAberto(hash_table, item);
	insere_FilaPrio(fp, item, p_i);

	for(l=1; l<=3; l++)
	{
		for(c=1; c<=3; c++)
		{
			
		}
	}

	row++;
	column++;

	printf("sondar %d %d\n", row, column);
	insereHash_enderAberto(hash_table, item);

	while(t_loop > 0)
	{
		scanf("%s", command);	/* lê comando */

		if(strcmp(command, "sondar") == 0)
		{

		}

		else if(strcmp(command, "dominar") == 0)
		{

		}
		else
		{
			flag = 1;
			break;
		}

		t_loop--;
		printf("fimturno\n");
	}

	if(flag == 1)
		EDAzinhos = 0;

	liberaHash(hash_table);

	return 0;
}

/* Hash Table */
Hash *criaHash(int TABLE_SIZE)
{
	Hash *hash_table = (Hash *)malloc(sizeof(Hash));

	if(hash_table != NULL)
	{
		int i;
		hash_table->TABLE_SIZE = TABLE_SIZE;
		hash_table->item = (struct mat **)malloc(TABLE_SIZE * sizeof(struct mat *));

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

int insereHash_enderAberto(Hash *hash_table, struct mat item)
{
	if(hash_table == NULL || hash_table->qtd == hash_table->TABLE_SIZE)
		return 0;

	int chave = item.pontuacao;
	int i, pos, new_pos;
	pos = calculaDivisao(chave, hash_table->TABLE_SIZE);

	for(i=0; i<hash_table->TABLE_SIZE; i++)
	{
		new_pos = sondagemLinear(pos, i, hash_table->TABLE_SIZE);
		if(hash_table->item[new_pos] == NULL)
		{
			struct mat *novo;
			novo = (struct mat *)malloc(sizeof(struct mat));

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

int buscaHash_enderAberto(Hash *hash_table, int valor, struct mat *item)
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

		if(hash_table->item[new_pos]->row == valor)
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

/* Priority Queue */
FilaPrio* cria_FilaPrio()
{
	FilaPrio *fp;

	fp = (FilaPrio*)malloc(sizeof(struct fila_prioridade));
	if(fp != NULL)
		fp->qtd = 0;
	return fp;
}

void libera_FilaPrio(FilaPrio *fp)
{
	free(fp);
}

int estaCheia_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return -1;
	return (fp->qtd == MAX);
}

int estaVazia_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return -1;
	return (fp->qtd == 0);
}

int insere_FilaPrio(FilaPrio *fp, struct mat item, int prio)
{
	if(fp == NULL)
		return 0;

	if(estaCheia_FilaPrio(fp))
		return 0;

	fp->dados[fp->qtd] = item;
	promoverElemento(fp, fp->qtd);
	fp->qtd++;
	return 1;
}

void promoverElemento(FilaPrio *fp, int filho)
{
	int pai;
	struct item temp;
	pai = (filho-1)/2;
	
	while(filho>0 && fp->dados[pai].prio <= fp->dados[filho].prio)
	{
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai];
		fp->dados[pai] = temp;

		filho = pai;
		pai = (filho-1) / 2;
	}
}

int remove_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio(fp))
		return 0;

	fp->qtd--;
	fp->dados[0] = fp->dados[fp->qtd];
	rebaixarElemento(fp, 0);
	return 1;
}

void rebaixarElemento(FilaPrio *fp, int pai)
{
	struct item temp;
	int filho = 2*pai+1;

	while(filho < fp->qtd)
	{
		/* Pai tem dois filhos? Quem é o maio? */
		if(filho < fp->qtd-1)
		{
			if(fp->dados[filho].prio < fp->dados[filho+1].prio)
				filho++;
		}

		/* Pai >= filho? terminar processo */
		if(fp->dados[pai].prio >= fp->dados[filho].prio)
			break;

		/* Trocar pai e filho de lugar e calcular novo filho*/
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai];
		fp->dados[pai] = temp;

		pai = filho;
		filho = 2*pai+1;
	}
}

int consulta_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio(fp))
		return 0;

	return fp->dados[fp->qtd-1].value;
}