#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quick_sort(int vet[], int left, int right);
int partition(int vet[], int left, int right);
int less(int current, int pivot);
void exch(int vet[], int current, int smaller);
void cmpexch(int vet[], int a, int b);

int main() {
  int vet[10], i;
  //vet = malloc(10);

  //generate random values to vet
  for(i=0; i<10; i++)
    vet[i] = random(time(NULL)) % 100;

  //sorting data
  quick_sort(vet, 0, 10-1);

  //print result
  for(i=0; i<10; i++)
    printf("%d\n", vet[i]);
}

void quick_sort(int vet[], int left, int right) {
  int j;

  if(right <= left)
    return;

  cmpexch(vet, (left+right)/2, right);
  cmpexch(vet, left, (left+right)/2);
  cmpexch(vet, right, (left+right)/2);

  j = partition(vet, left, right);
  quick_sort(vet, left, j-1);
  quick_sort(vet, j+1, right);
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
