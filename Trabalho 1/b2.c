#include <stdio.h>
#include <stdlib.h>

//linked list structure
typedef struct Character
{
	char c;
	int cod;
	//struct Character *next;
} Character;

void quick_sort(Character character[], int left, int right);
int partition(Character character[], int left, int right);
int less(int current, int pivot);
void exch(Character character[], int current, int smaller);
void cmpexch(Character character[], int a, int b);
void print_result(Character character[], int tam);
int rmv_duplicate(Character character[], int tam);

int main(void)
{
	Character *character;
	int i=0, len;

	character = (Character *)malloc(sizeof(Character)*100000000);

	while(scanf("%d %c", &character[i].cod, &character[i].c) != EOF) 
		i++;

	//sorting data
	quick_sort(character, 0, i-1); 

	//removing duplicated numbers
    len = rmv_duplicate(character, i);
	
	//printing results
	print_result(character, len);

	free(character);

	return 0;
}


void quick_sort(Character character[], int left, int right) {
  int j;

  if(right <= left)
    return;

  exch(character, (left+right)/2, right-1);

  cmpexch(character, left, right-1);
  cmpexch(character, left, right);
  cmpexch(character, right-1, right);

  j = partition(character, left, right);
  quick_sort(character, left, j-1);
  quick_sort(character, j+1, right);
}

/**
Ensure that the vector on pivot left side is smaller
and the right side is bigger
**/
int partition(Character character[], int left, int right) {
  Character temp = character[right];
  int j = left, k;

  for(k=left; k<right; k++) {
    if(less(character[k].cod, temp.cod)) {
      //passing index to change the current value (k) with the smaller (j)
      exch(character, k, j);
      j++;
    }
  }
  exch(character, j, right); //passing index to change the current value (j) with the pivot (right)
  return j; //return index that is the pivot
}

int less(int current, int pivot) {
  if(current < pivot)
    return 1; //true
  return 0; //false
}

void exch(Character character[], int current, int smaller) {
  Character temp = character[current];
  character[current] = character[smaller];
  character[smaller] = temp;
}

//median of three
void cmpexch(Character character[], int a, int b) {
  if(a > b) {
    Character temp = character[a];
    character[a] = character[b];
    character[b] = temp;
  }
}

//removing duplicated numbers
int rmv_duplicate(Character character[], int tam) {
  int i, j, k;

  for(i=0; i<tam; i++) {
    for(j=i+1; j<tam; ) {
      if(character[i].cod == character[j].cod) {
        for(k=j; k<tam; k++)
          character[k] = character[k + 1];
        tam--;
      }
      else
        j++;
    }
  }

  return j;
}

void print_result(Character character[], int tam)
{
	for(int i=0; i<tam; i++)
		printf("%c", character[i].c);
	printf("\n");
}