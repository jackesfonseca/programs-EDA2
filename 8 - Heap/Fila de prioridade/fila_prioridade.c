#include <stdio.h>
#include <stdlib.h>

struct pq_st
{
	int pq; /* priority queue item */
	int n; /* amount of elements */
};

void init_pq(struct pq_st *PQ, int maxN);
int empty_pq(struct pq_st *PQ);
void fix_down();
void fix_up(struct pq_st *PQ, int k);
int less(int ancestor_node, int son_node);

int main(void)
{



	return 0;
}

void init_pq(struct pq_st *PQ, int maxN)
{
	PQ->pq = malloc(sizeof(int) * (maxN + 1));
	PQ->n = 0;
}

int empty_pq(struct pq_st *PQ)
{
	return PQ->n == 0;
}

void fix_up(struct pq_st *PQ, int k)
{
	while(k>1 && less(PQ[k/2]->pq, PQ[k]->pq))
	{

	}
}

int less(int ancestor_node, int son_node)
{
	return ancestor_node < son_node;
}
