#include <stdio.h>
#include <stdlib.h>

/* Adjacent list

1 -> 3
2 -> NULL
3 -> 1
4 -> NULL

*/

typedef struct graph
{
	int v; /* vertex amount*/
	int e; /* edge amount */
	int **adj;
}Graph;

typedef struct node *link;

struct node
{
	int v;
	link next;
};

link new(int v, link next);
Graph init_graph(int v);

int main(void)
{


	return 0;
}

link new(int v, link next)
{
	link x = malloc(sizeof(x));

	x->v = v;
	x->next = next;

	return x;
}

Graph init_graph(int v)
{
	int i;
	Graph *graph = malloc(sizeof(Graph));

	graph->v = v;
	graph->e = 0;
	graph->adj = malloc(v * sizeof(link));

	for(i=0; i<v; i++)
	{
		graph->v = NULL;
	}
	return graph;
}