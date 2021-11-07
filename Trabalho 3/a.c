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

Grafo *cria_grafo(int nro_vertices, int grau_max, int eh_ponderado);
void libera_grafo(Grafo *grafo);
int insere_aresta(Grafo *grafo, int orig, int dest, int eh_digrafo, float peso);
int remove_aresta(Grafo *grafo, int orig, int dest, int eh_digrafo);
int dfs(Grafo *grafo, int ini, int *visitado, int cont);
int dfs_aux(Grafo *grafo, int ini, int *visitado);
int pesquisa_grafo(Grafo *grafo, int ini, int *visitado);

int main(void)
{
	Grafo *grafo;
	int V, eh_digrafo=0, v, w;
	int cont=0, i, conexos;
	int *vis;

	scanf("%d", &V);

	grafo = cria_grafo(V, V, 0);
	vis = malloc(sizeof(int) * V);

	while(scanf("%d %d", &v, &w) != EOF)
		insere_aresta(grafo, v, w, eh_digrafo, 0);

	conexos = pesquisa_grafo(grafo, 0, vis);

	printf("%d\n", conexos);

	libera_grafo(grafo);

	return 0;
}

Grafo *cria_grafo(int nro_vertices, int grau_max, int eh_ponderado)
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

	if(eh_digrafo == 0) /* não dígrafo */
		insere_aresta(grafo, dest, orig, 1, peso); /* insert another vertex if it's a digraph */

	return 1;
}

int remove_aresta(Grafo *grafo, int orig, int dest, int eh_digrafo)
{
	if(grafo == NULL)
		return 0;

	if(orig < 0 || orig >= grafo->nro_vertices)
		return 0;

	if(dest < 0|| dest >= grafo->nro_vertices)
		return 0;

	int i;

	while(i < grafo->grau[orig] && grafo->arestas[orig][i] != dest)
		i++;

	if(i == grafo->grau[orig])
		return 0;

	grafo->grau[orig]--;
	grafo->arestas[orig][i] = grafo->arestas[orig][grafo->grau[orig]];

	if(grafo->eh_ponderado)
		grafo->pesos[orig][i] = grafo->pesos[orig][grafo->grau[orig]];

	if(eh_digrafo == 0)
		remove_aresta(grafo, dest, orig, 1);

	return 1;
}

int dfs_aux(Grafo *grafo, int ini, int *visitado)
{
	int i; 
	//int cont = 1;

	for(i=0; i<grafo->nro_vertices; i++)
		visitado[i] = 0;

	//dfs(grafo, ini, visitado, cont);
}

int dfs(Grafo *grafo, int ini, int *visitado, int cont)
{	
	int i;
	visitado[ini] = cont;

	for(i=0; i<grafo->grau_max; i++)
	{
		if(!visitado[grafo->arestas[ini][i]])
			dfs(grafo, grafo->arestas[ini][i], visitado, cont+1);
	}
}

int pesquisa_grafo(Grafo *grafo, int ini, int *visitado)
{
	int i, cont=1, conexos=0;

	dfs_aux(grafo, ini, visitado); /* marca todos os vértices como não visitado */

	for(i=0; i<grafo->grau_max; i++)
	{
		//printf("[visitado] %d\n", visitado[i]);
		if(visitado[i] == 0)
		{
			dfs(grafo, i, visitado, cont);
			conexos++;
		}
	}

	return conexos;
}