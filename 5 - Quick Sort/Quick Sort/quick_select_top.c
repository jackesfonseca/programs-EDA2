#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quick_select(int vet[], int left, int right, int k);
int partition(int vet[], int left, int right);
int less(int current, int pivot);
void exch(int vet[], int current, int smaller);

int main() {
  int *vet, i, len=5, j, k=3, top;

  vet = malloc(sizeof(int) * len);

  //generate random values to vet
  srand((unsigned)time(NULL));

  for(i=0; i<len; i++)
    vet[i] = rand() % 100;

  //printf random values
  for(j=0; j<i; j++)
    printf("%d\n", vet[j]);

    printf("\n");
  //quick select
  for(top=0; top<k; top++)
  {
    quick_select(vet, 0, i-1, top);
    //print kth element
    printf("kth{%d} element is: %d\n", top, vet[top]);
  }
    
}

//sort kth element
void quick_select(int vet[], int left, int right, int k)
{
  int i;

  if(right <= left)
    return; 

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