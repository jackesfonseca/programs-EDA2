#include <stdio.h>
#include <stdlib.h>

struct mat
{
	int row, column, pontuacao;
};

struct elemento
{
	struct mat dados;
	struct elemento *prox;
};

typedef struct elemento* Pilha;
typedef struct elemento Elem;

Pilha* cria_pilha();
void libera_pilha(Pilha* pilha);
int tamanho_pilha(Pilha* pilha);
int pilha_vazia(Pilha* pilha);
int insere_pilha(Pilha* pilha, struct mat item);
int remove_pilha(Pilha* pilha);
int consulta_pilha(Pilha* pilha);

int main()
{
	Pilha *pilha;
	struct mat item;
	int tam, l, c;

	pilha = cria_pilha();

	/* insert data */
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			item.row = l;
			item.column = c;
			item.pontuacao = l*c*c;
			insere_pilha(pilha, item);
			/* print teste */
			printf("linha: %d coluna: %d\n", (*pilha)->dados.row, (*pilha)->dados.column);
		}
	}

	remove_pilha(pilha);
	/* print teste */
	printf("linha: %d coluna: %d\n", (*pilha)->dados.row, (*pilha)->dados.column);

	libera_pilha(pilha);

	return 0;
}

Pilha* cria_pilha()
{
	Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));
	if(pilha != NULL)
		*pilha = NULL;

	return pilha;
}

void libera_pilha(Pilha* pilha)
{
	if(pilha != NULL)
	{
		Elem* no;
		while((*pilha) != NULL)
		{
			no = *pilha;
			*pilha = (*pilha)->prox;
			free(no);
		}
		free(pilha);
	}

}

int tamanho_pilha(Pilha* pilha)
{
	if(pilha != NULL)
		return 0;

	int cont=0;
	Elem* no = *pilha;
	while(no != NULL)
	{
		cont++;
		no = no->prox;
	}

	return cont;
}

int pilha_vazia(Pilha* pilha)
{
	if(pilha == NULL) /* representação da pilha */
		return 1;
	if(*pilha == NULL) /* representação do topo */
		return 1;

	return 0;
}

int insere_pilha(Pilha* pilha, struct mat item)
{
	if(pilha == NULL)
		return 0;

	Elem* no = (Elem*)malloc(sizeof(Elem));
	if(no == NULL)
		return 0;

	no->dados = item;
	no->prox = (*pilha);
	*pilha = no;
	return 1;
}

int remove_pilha(Pilha* pilha)
{
	if(pilha == NULL)
		return 0;

	if((*pilha) == NULL)
		return 0;

	Elem *no = *pilha;
	*pilha = no->prox;
	free(no);

	return -1;
}

int consulta_pilha(Pilha* pilha)
{

}