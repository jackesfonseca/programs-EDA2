#include <stdio.h>
#include <stdlib.h>

struct Paginas
{
	int pagina;
};

struct elemento
{
	//struct Paginas dados;
	int pagina;
	struct elemento *prox;
};

typedef struct elemento* Lista;
typedef struct elemento Elem;

Lista* cria_lista();
void libera_lista(Lista *lista);
int tamanho_lista(Lista *lista);
int esta_vazia(Lista *lista);
int esta_cheia(Lista *lista);
int insere_lista_inicio(Lista *lista, int pagina);
int remove_lista_inicio(Lista *lista);
int consulta_lista_pos(Lista *lista, int pos);
int consulta_lista_val(Lista *lista, int valor);

int main(void)
{
	Lista *lista;
	int consulta;

	lista = cria_lista();

	insere_lista_inicio(lista, 1);
	insere_lista_inicio(lista, 2);
	insere_lista_inicio(lista, 3);	

	consulta = consulta_lista_val(lista, 2);
	printf("%d\n", consulta);

	libera_lista(lista);

	return 0;
}

Lista* cria_lista()
{
	Lista* lista = (Lista *)malloc(sizeof(Lista));

	if(lista != NULL)
		*lista = NULL;

	return lista;
}

void libera_lista(Lista *lista)
{
	if(lista != NULL && (*lista) != NULL)
	{
		Elem *aux, *no = *lista;

		while((*lista) != no->prox)
		{
			aux = no;
			no = no->prox;
			free(no);
		}

		free(no);
		free(lista);
	}
}

int tamanho_lista(Lista *lista)
{
	if(lista == NULL || (*lista) == NULL)
		return 0;

	int cont;
	Elem* no = *lista;
	do
	{
		cont++;
		no = no->prox;
	} while(no != (*lista));

	return cont;
}

int esta_vazia(Lista *lista)
{
	if(lista != NULL || (*lista) == NULL)
		return 1;

	return 0;
}

int esta_cheia(Lista *lista)
{
	return 0;
}

int insere_lista_inicio(Lista *lista, int pagina)
{
	if(lista == NULL || (*lista) == NULL)
		return 0;

	Elem *no = (Elem *)malloc(sizeof(Elem));

	if(no == NULL)
		return 0;

	no->pagina = pagina;
	if((*lista) == NULL)
	{
			printf("NULL\n");
		*lista = no;
		no->prox = no;
	}
	else
	{
		Elem *aux = *lista;
		while(aux->prox != (*lista))
			aux = aux->prox;

		aux->prox = no;
		no->prox = *lista;
		*lista = no;
	}
}

int remove_lista_inicio(Lista *lista)
{
	if(lista == NULL || (*lista) == NULL)
		return 0;

	if((*lista) == (*lista)->prox)
	{
		free(*lista);
		*lista = NULL;
		return 1;
	}

	Elem *atual = *lista;

	while(atual->prox != (*lista))
		atual = atual->prox;
	Elem *no = *lista;
	atual->prox = no->prox;
	*lista = no->prox;
	free(no);

	return 1;

}

int consulta_lista_pos(Lista *lista, int pos)
{
	if(lista == NULL || (*lista) == NULL || pos <= 0)
		return 0;

	Elem *no = *lista;
	int i = 1;

	while(no->prox != (*lista) && i < pos)
	{
		no = no->prox;
		i++;
	}

	if(i != pos)
		return 0;

	return 1;
}

int consulta_lista_val(Lista *lista, int valor)
{
	if(lista == NULL || (*lista) == NULL)
		return 1;

	Elem *no = *lista;

	while(no->prox != (*lista) && no->pagina != valor)
		no = no->prox;

	if(no->pagina != valor)
		return 0;

	return no->pagina;
}