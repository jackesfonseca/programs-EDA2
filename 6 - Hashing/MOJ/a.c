#include <stdio.h>
#include <stdlib.h>

typedef struct Count
{
	int color;
	int frequency;
} Count;

void hash_init(Count hash_table[], int m);
void print_result(Count hash_table[], int m);
void merge_sort(Count hash_table[], int init, int end);
void merge(Count hash_table[], int init, int mid, int end);

int main()
{
	Count *hash_table;
	int n=0, m=1000000, i=0, tam, cod;
	int bigger_frequency=0, bigger_color=0; 

	//starting hash table
	hash_table = (Count *)malloc(sizeof(Count) * m);
	hash_init(hash_table, m);

    scanf("%d", &tam);
    
    /* probably O(n²) */
	while(tam != 0)
	{
		for(i=0; i<tam; i++)
		{
			scanf("%d", &cod);
			hash_table[cod].color = cod;
			hash_table[cod].frequency++;

			if(hash_table[cod].frequency > bigger_frequency)
			{
				bikesgger_frequency = hash_table[cod].frequency;
				bigger_color = hash_table[cod].color;
			}
		}

		//printing result
		printf("%d\n", bigger_color);

		//restart hash table and auxiliar variables
		hash_init(hash_table, m);
		i=0;
		
		scanf("%d", &tam);
	}

	return 0;
}

void hash_init(Count *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		hash_table[i].color = 0;
		hash_table[i].frequency = 0;
    }
}