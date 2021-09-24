#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	int dado;
	struct no *esq, *dir;
} no;

typedef struct item
{
	no *no;
	struct pilha *proximo;
}Item;

typedef struct pilha
{
	Item *topo; 
}Pilha;

no *init();
no *cria_no(int chave);
no *insere_no(no *raiz, no *no);

int main(void)
{



	return 0;
}

no *init_arvore()
{
	return NULL;
}

no *cria_no(int chave)
{
	no *novo_no = (no *)malloc(sizeof(no *));
	novo_no->dado = chave;
	novo_no->esq = NULL;
	novo_no->dir = NULL;
}

no *insere_no(no *raiz, no *no)
{
	if(raiz == NULL)
		return no;

	if(no->dado < raiz->dado)
		raiz->esq = insere_no(raiz->esq, no);

	else
		raiz->direita = insere(raiz->dir, no);

	return raiz;
}

void init_pilha(Pilha *pilha)
{
	pilha->topo = NULL;
}

int push(Pilha *pilha, )