#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

struct item
{
	int value;
	int prio;
};

struct fila_prioridade
{
	int qtd;
	struct item dados[MAX];
};

typedef struct fila_prioridade FilaPrio;

FilaPrio* cria_FilaPrio();
void libera_FilaPrio(FilaPrio *fp);
int consulta_FilaPrio(FilaPrio *fp);
int insere_FilaPrio(FilaPrio *fp, int value, int prio);
int remove_FilaPrio(FilaPrio *fp);
int tamanho_FilaPrio(FilaPrio *fp);
int estaCheia_FilaPrio(FilaPrio *fp);
int estaVazia_FilaPrio(FilaPrio *fp);

int main(void)
{
	FilaPrio *fp;
	int tam, insere, remove, consulta;

	fp = cria_FilaPrio();
	tam = tamanho_FilaPrio(fp);
	/* insert */
	insere = insere_FilaPrio(fp, 1, 1);
	insere = insere_FilaPrio(fp, 2, 2);
	insere = insere_FilaPrio(fp, 3, 3);
	insere = insere_FilaPrio(fp, 4, 4);
	insere = insere_FilaPrio(fp, 5, 5);
	/* consult */
	consulta = consulta_FilaPrio(fp);
	printf("Consulta: %d\n", consulta);

	/* remove */
	remove = remove_FilaPrio(fp);
	/* consult */
	consulta = consulta_FilaPrio(fp);
	printf("Consulta: %d\n", consulta);
	remove = remove_FilaPrio(fp);
	remove = remove_FilaPrio(fp);
	/* consult */
	consulta = consulta_FilaPrio(fp);
	printf("Consulta: %d\n", consulta);

	printf("Tamanho: %d\n", tam);

	if(estaCheia_FilaPrio(fp))
		printf("A fila esta cheia!\n");

	if(estaVazia_FilaPrio(fp))
		printf("A fila esta vazia!\n");

	libera_FilaPrio(fp);

	return 0;
}

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

int tamanho_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return -1;
	return fp->qtd;
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

/* O(n) */
int insere_FilaPrio(FilaPrio *fp, int value, int prio)
{
	if(fp == NULL)
		return 0;

	if(estaCheia_FilaPrio(fp))
		return 0;

	int i = fp->qtd - 1;
	while(i >= 0 && fp->dados[i].prio >= prio)
	{
		fp->dados[i+1] = fp->dados[i];
		i--;
	}

	fp->dados[i+1].value = value;
	fp->dados[i+1].prio = prio;
	fp->qtd++;
	return 1;
}

/* O(1) */
int remove_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio(fp))
		return 0;

	fp->qtd--;
	return 1;
}

int consulta_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio(fp))
		return 0;

	return fp->dados[fp->qtd-1].value;
}