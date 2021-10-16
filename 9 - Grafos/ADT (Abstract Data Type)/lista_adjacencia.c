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

int main(void)
{
	Grafo *grafo;

	grafo = criaGrafo(10, 7, 0);

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