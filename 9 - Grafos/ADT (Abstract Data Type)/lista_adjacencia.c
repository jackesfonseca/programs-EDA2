#include <stdio.h>
#include <stdlib.h>

struct grafo
{
	int eh_ponderado;
	int nro_vertices;
	int grau_max;
	int **arestas;
	float **pesos;
	int *grau;
};

typedef struct grafo Grafo;

Grafo *criaGrafo(int nro_vertices, int grau_max, int eh_ponderado);
void libera_grafo(Grafo *grafo);
int insere_aresta(Grafo *grafo, int orig, int dest, int eh_digrafo, float peso);

int main(void)
{
	Grafo *grafo;

	grafo = criaGrafo(10, 7, 0);

	/* insert data */
	insere_aresta(grafo, 0, 1, 0, 0);
	insere_aresta(grafo, 1, 3, 0, 0);

	libera_grafo(grafo);

	return 0;
}

Grafo *criaGrafo(int nro_vertices, int grau_max, int eh_ponderado)
{
	Grafo *grafo = (Grafo *)malloc(sizeof(Grafo));

	if(grafo != NULL)
	{
		int i;
		grafo->nro_vertices = nro_vertices;
		grafo->grau_max = grau_max;
		grafo->eh_ponderado = (eh_ponderado != 0)?1 : 0;
		grafo->grau = (int *)malloc(nro_vertices * sizeof(int));
		grafo->arestas = (int **)malloc(nro_vertices * (sizeof(int *)));

		for(i=0; i<nro_vertices; i++)
			grafo->arestas[i] = (int *)malloc(grau_max*sizeof(int));
			if(grafo->eh_ponderado)
			{
				grafo->pesos = (float **)malloc(nro_vertices * sizeof(float *));
				for(i=0; i<nro_vertices; i++)
					grafo->pesos[i] = (float *)malloc(grau_max * sizeof(float));
			}
	}

	return grafo;
}

void libera_grafo(Grafo *grafo)
{
	if(grafo != NULL)
	{
		int i;
		for(i=0; i<grafo->nro_vertices; i++)
			free(grafo->arestas[i]);
		free(grafo->arestas);

		if(grafo->eh_ponderado)
		{
			for(i=0; i<grafo->nro_vertices; i++)
				free(grafo->pesos[i]);
			free(grafo->pesos);
		}

		free(grafo->grau);
		free(grafo);
	}
}

int insere_aresta(Grafo *grafo, int orig, int dest, int eh_digrafo, float peso)
{
	/* verify if is a existent vertex */
	if(grafo == NULL)
		return 0;

	if(orig < 0 || orig >= grafo->nro_vertices)
		return 0;

	if(dest < 0 || dest >= grafo->nro_vertices)
		return 0;

	grafo->arestas[orig][grafo->grau[orig]] = dest;

	if(grafo->eh_ponderado)
		grafo->pesos[orig][grafo->grau[orig]] = peso;

	grafo->grau[orig]++;

	if(eh_digrafo == 0)
		insere_aresta(grafo, dest, orig, 1, peso); /* insert another vertex if it's a digraph */

	return 0;
}