#include <stdio.h>
#include <stdlib.h>

void quick_sort(int vet[], int left, int right);
int partition(int vet[], int left, int right);
int less(int current, int pivot);
void exch(int vet[], int current, int smaller);
void cmpexch(int vet[], int a, int b);
void rmv_duplicate(int vet[], int tam);
void print_result(int vet[], int tam);

int main() {
  int *vet, tam, i;

  //get vector tam
  scanf("%d", &tam);

  vet = malloc(sizeof(int) * tam);

  //getting vector
  for(i=0; i<tam; i++)
    scanf("%d", &vet[i]);

  //sorting vector
  quick_sort(vet, 0, tam-1);

  //removing duplicated numbers
  rmv_duplicate(vet, tam);

  //print results
  print_result(vet, tam);

  return 0;
}

/**
sorting data
**/
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
    //compare if vet on k positions is smaller than temp variable
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

//removing duplicated numbers
void rmv_duplicate(int vet[], int tam) {
  int i, j, k;

  for(i=0; i<tam; i++) {
    for(j=i+1; j<tam; ) {
      if(vet[i] == vet[j]) {
        for(k=j; k<tam; k++)
          vet[k] = vet[k + 1];
        tam--;
      }
      else
        j++;
    }
  }
}

//printing result
void print_result(int vet[], int tam) {
  int i;

  for(i=0; i<tam; i++) {
    printf("%d", vet[i]);
    if(i != tam-1) {
      printf(" ");
    }
  }

  printf("\n");
}
