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
void promoverElemento(FilaPrio *fp, int filho);
int remove_FilaPrio(FilaPrio *fp);
void rebaixarElemento(FilaPrio *fp, int pai);
int tamanho_FilaPrio(FilaPrio *fp);
int estaCheia_FilaPrio(FilaPrio *fp);
int estaVazia_FilaPrio(FilaPrio *fp);

int main(void)
{
	FilaPrio *fp;
	int insere, remove, consulta;

	fp = cria_FilaPrio();

	/* insert */
	insere = insere_FilaPrio(fp, 1, 1);
	insere = insere_FilaPrio(fp, 2, 2);
	insere = insere_FilaPrio(fp, 3, 3);
	insere = insere_FilaPrio(fp, 4, 4);
	insere = insere_FilaPrio(fp, 5, 5);

	/* remove */
	remove = remove_FilaPrio(fp);
	remove = remove_FilaPrio(fp);
	remove = remove_FilaPrio(fp);

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

/* O(log(n)) */
int insere_FilaPrio(FilaPrio *fp, int value, int prio)
{
	if(fp == NULL)
		return 0;

	if(estaCheia_FilaPrio(fp))
		return 0;

	fp->dados[fp->qtd].value = value;
	fp->dados[fo->qtd].prio = prio;
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

/* O(log(n)) */
int remove_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio())
		return 0;

	fp->qtd--;
	fp->dados[0] = fp->dados[fp->qtd];
	rebaixarElemento(fp, 0);
	return 1;
}

void rebaixarElemento(FilaPrio *fp, int pai)
{
	struct item temp;
	int filho 2*pai+1;

	while(filho < fp->qtd)
	{
		/* Pai tem dois  filhos? Quem é o maio? */
		if(filho < fp>qtd-1)
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

}