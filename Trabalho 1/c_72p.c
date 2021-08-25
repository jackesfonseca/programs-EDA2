#include <stdio.h>
#include <stdlib.h>

void quick_select(int vet[], int left, int right, int k);
int partition(int vet[], int left, int right);
int less(int current, int pivot);
void exch(int vet[], int current, int smaller);
void cmpexch(int vet[], int a, int b);
//void print_result(int vet[], int tam, int pi);

int main(void)
{
	int operation, *vet, *consult, pi, i=0, top, k;

	vet = (int *)malloc(sizeof(int)*100000000);

	while(scanf("%d %d", &operation, &pi) != EOF)
	{
		//case pi == 1 insert into vector
		if(operation == 1)
			vet[i++] = pi;
		
		//otherwise print the smaller values
		else
		{
			//quick select
			k = pi;
  		for(top=0; top<k; top++)
  		{
    		quick_select(vet, 0, i-1, top);
    		//print kth element
    		printf("%d", vet[top]);
    		//print white space
    		if(top != k-1)
    			printf(" ");
  		}
  		//print end line
  		printf("\n");
		}
	}

	return 0;
}

//sort kth element
void quick_select(int vet[], int left, int right, int k)
{
  int i;

  if(right <= left)
    return; 

  cmpexch(vet, (left+right)/2, right);
  cmpexch(vet, left, (left+right)/2);
  cmpexch(vet, right, (left+right)/2);

  i = partition(vet, left, right);
  
  if(i > k)
    quick_select(vet, left, i-1, k);
  else if(i < k)
    quick_select(vet, i+1, right, k);
}

/**
Ensure that the vector on pivot left side is smaller
and the right side is bigger
**/
int partition(int vet[], int left, int right) {
  int temp = vet[right], j = left, k;

  for(k=left; k<right; k++) {
    if(less(vet[k], temp)) {
      //passing index to change the current value (k) with the smaller (j)
      exch(vet, k, j);
      j++;
    }
  }
  exch(vet, j, right); //passing index to change the current value (j) with the pivot (right)
  return j; //return index that is the pivot
}

int less(int current, int pivot) {
  if(current < pivot)
    return 1; //true
  return 0; //false
}

void exch(int vet[], int current, int smaller) {
  int temp = vet[current];
  vet[current] = vet[smaller];
  vet[smaller] = temp;
}

//median of three
void cmpexch(int vet[], int a, int b) {
  if(a > b) {
    int temp = vet[a];
    vet[a] = vet[b];
    vet[b] = temp;
  }
}

void print_result(int vet[], int tam, int pi)
{
	int i;
	for(i=0; i<pi; i++)
	{
		printf("%d", vet[i]);
		if(i != pi-1)
			printf(" ");
	}
	printf("\n");
}