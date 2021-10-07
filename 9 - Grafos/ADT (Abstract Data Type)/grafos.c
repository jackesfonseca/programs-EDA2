#include <stdio.h>
#include <stdlib.h>


/* adjacent matrix */

/*
	0|1|2
0 	
1
2

*/

typedef struct edge
{
	int v;
	int w;
}Edge;

typedef struct graph
{
	int v; /* vertex amount*/
	int e; /* edge amount */
	int **adj;
}Graph;

Edge init_edge(int v, int w);
Graph init_graph(int v);
void insert_edge(Graph graph, Edge edge);
void remove_edge(Graph graph, Edge edge);
int amount_edges(Edge edge[], Graph graph);
Graph graph_copy(Graph graph);
void graph_destroy(Graph graph);

int main()
{
	Graph *graph;
	int v
	graph = init_graph(v);
}

Graph init_graph(int v)
{
	Graph graph = malloc(sizeof(Graph));
	graph->v = v;
	graph->e = 0;
	graph->adj = matrix(v, v, 0);
	return graph;
}

int** matrix(int v, int v, int value)
{

} 

void insert_edge(Graph graph, Edge edge)
{
	int v = edge.v, w = edge.w;
	if(graph->adj[v][w] == 0)
	{
		graph->e++;
		graph->adj[v][w] = 1;
		graph->adj[w][v] = 1;
	}
}

void remove_edge(Graph graph, Edge e)
{
	int v = edge.v, w = edge.w;
	if(graph->ajd[v][w] == 1)
		graph->e--;
}

int amount_edges(Edge edge[], Graph graph)
{
	int v, w, e=0;
	for(v=0; v<graph->v; w++)
	{
		for(w=v+1; w<graph->v; w++)
			edge[e++] = init_edge(v, w);
	}

	return e;
}
