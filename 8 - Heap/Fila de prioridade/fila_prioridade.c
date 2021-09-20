#include <stdio.h>
#include <stdlib.h>

struct pq_st
{
	int pq; /* priority queue item */
	int n; /* amount of elements */
};

void init_pq(struct pq_st *PQ, int maxN);
int empty_pq(struct pq_st *PQ);
void fix_down(struct pq_st *PQ, int k, int pq_len);
void fix_up(struct pq_st *PQ, int k);
int less(int ancestor_node, int son_node);
void exch(struct pq_st *PQ, int son_node, int ancestor_node);
void insert_pq(struct pq_st *PQ, int item);
int delMax_pq(struct pq_st *PQ);

int main(void)
{
	struct pq_st *PQ;
	int maxN = 10, i;

	init_pq(PQ, maxN);
	insert_pq(PQ, 10);

	for(i=0; i<maxN; i++)
		printf("%d\n", PQ[i].pq);

	return 0;
}

void init_pq(struct pq_st *PQ, int maxN)
{
	PQ = malloc(sizeof(int) * (maxN + 1));
	PQ->n = 0;
}

int empty_pq(struct pq_st *PQ)
{
	return PQ->n == 0;
}

void fix_up(struct pq_st *PQ, int k)
{
	while(k>1 && less(PQ[k/2].pq, PQ[k].pq))
	{
		exch(PQ, k, k/2);
		k = k/2;
	}
}

void fix_down(struct pq_st *PQ, int k, int pq_len)
{
	int j;

	while(2*k <= pq_len)
	{
		j = 2*k;
		if(j<pq_len && less(PQ[j].pq, PQ[j+1].pq))
			j++;
		if(!less(PQ[k].pq, PQ[j].pq))
			break;
		exch(PQ, k, j);
		k = j;
	}
}

int less(int ancestor_node, int son_node)
{
	return ancestor_node < son_node;
}

void exch(struct pq_st *PQ, int son_node, int ancestor_node)
{
	struct pq_st temp;

	temp = PQ[son_node];
	PQ[son_node] = PQ[ancestor_node];
	PQ[ancestor_node] = temp;
}

void insert_pq(struct pq_st *PQ, int item)
{
	PQ[++PQ->n].pq = item;
	fix_up(PQ, PQ->n); /* fix_up(PQ->, PQ->n); */
}

int delMax_pq(struct pq_st *PQ)
{
	exch(PQ, 1, PQ->n);
	fix_down(PQ, 1, (PQ->n-1));
	return PQ[PQ->n].pq;
}