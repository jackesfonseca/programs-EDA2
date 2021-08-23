#include <stdio.h>
#include <stdlib.h>

//linked list structure
typedef struct Character
{
	char c;
	int cod;
	struct Character *next;
} Character;

void quick_sort(Character *next_character, int left, int right);
int partition(Character character[], int left, int right);
int less(int current, int pivot);
void exch(Character character[], int current, int smaller);
void print_result(Character *next_character);

int main(void)
{
	Character *init_character, *next_character;
	//int i=0;

	init_character = (Character *)malloc(sizeof(Character));
	next_character = init_character;

	while(scanf("%d %c", &next_character->cod, &next_character->c) != EOF) 
	{
		next_character->next = (Character *)malloc(sizeof(Character));
		next_character = next_character->next;

	}

	next_character->next = NULL;
	next_character = init_character;

	quick_sort(character, 0, i-1); 
	
	print_result(next_character);

	return 0;
}

void quick_sort(Character *next_character, int left, int right) 
{
  int j;

  if(right <= left)
    return;

  j = partition(next_character, left, right);
  quick_sort(next_character, left, j-1);
  quick_sort(next_character, j+1, right);
}

int partition(Character *next_character, int left, int right) 
{
  int temp = next_character->cod, j = left, k;

  for(k=left; k<right; k++) {
    if(less(next_character->cod, temp)) {
      //passing index to change the current value (k) with the smaller (j)
      exch(next_character, k, j);
      j++;
    }
  }
  exch(next_character, j, right); //passing index to change the current value (j) with the pivot (right)
  return j; //return index that is the pivot
}

int less(int current, int pivot) 
{
  if(current < pivot)
    return 1; //true
  return 0; //false
}

void exch(Character *character, int current, int smaller) 
{
  int temp = vet[current];
  vet[current] = vet[smaller];
  vet[smaller] = temp;
}

void print_result(Character *next_character)
{
	while(next_character->next != NULL)
	{
		printf("%d %c\n", next_character->cod, next_character->c);
		next_character = next_character->next;
	}
}