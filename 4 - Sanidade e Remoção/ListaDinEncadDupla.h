#include <stdio.h>

/**
	Implementando uma lista dinâmica duplamente encadeada
	"ListaDinEncadDupla.h": definir
		- os portótipos das funções
		- o tipo de dado armazenado na lista
		- o ponteiro "lista"

	"ListaDinEncadDupla.c": definir
		- o tipo de dados: "lista"
		- implementar as suas funções
*/
struct aluno {
	int matricula;
	char[30];
	float n1, n2, n3;
}

typedef struct elemento* Lista; 

struct elemento {
	struct elemento *ant;
	struct aluno dados;
	struct elemento *prox;
}

typedef struct elemento Elem;

//Lista *li;

Lista* cria_lista();

Lista* cria_lista() {
	Lista* li = (Lista*) malloc(sixeof(Lista));
	if(li != NULL)
		*li = NULL;
	return li;
}

//li = cria_lista();

void libera_lista(Lista* li);

void libera_lista(Lista* li) {
	if(li != NULL) {
		Elem* no;
		while((*li) != NULL) {
			no = *li;
			*li = (*li)->prox;
			free(no);
		}
		free(li);
	}
}

//libera_lista(li);

int tamanho_lista(Lista);

int tamanho_lista(Lista* li);

int tamanho_lista(Lista* li) {
	if(li == NULL) 
		return 0;
	int cont = 0;
	Elem* no = *li;
	while(no != NULL) {
		cont++;no = no->prox;
	}

	return cont;
}

//int x = tamanho_lista(li);

int lista_cheia(Lista* li);

int lista_cheia(Lista* li) {
	return 0;
}

//int x = lista_cheai(li);
//if(lista_cheia(li))

int lista_vazia(Lista* li);

int lista_vazia(Lista* li);

int lista_vazia(Lista* li) {
	if(li == NULL)
		return 1;
	if(*li == NULL) 
		return 1;
	return 0;
}

//int x = lista_vazia(Lista* li);
//if(lista_vazia(li))