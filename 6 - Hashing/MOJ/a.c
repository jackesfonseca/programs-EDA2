#include <stdio.h>
#include <stdlib.h>

typedef struct Count
{
	int color;
	int frequency;
} Count;

void hash_init(Count hash_table[], int m);

int main()
{
	Count *hash_table;
	int n=0, m=1000001, i=0, tam, cod;
	int bigger_color=0, bigger_frequency=0;

    scanf("%d", &tam);
    
	//starting hash table
	hash_table = (Count *)malloc(sizeof(Count) * m);
	hash_init(hash_table, m);

    /* probably O(n²) */
	while(tam != 0)
	{
		for(i=0; i<tam; i++)
		{
			scanf("%d", &cod);
			
			hash_table[cod].frequency++;
			//hash_table[cod].color = cod;

			if(hash_table[cod].frequency > bigger_frequency)
			{
				bigger_frequency = hash_table[cod].frequency;
				bigger_color = hash_table[cod].color;
			}
		}

		/* print result */
		printf("%d\n", bigger_color);		

		//restart hash table and auxiliar variables
		hash_init(hash_table, m);
		bigger_color = 0;
		bigger_frequency = 0;
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