#include <stdio.h>
#include <stdlib.h>

typedef struct Count
{
	char ascii;
	int frequency;
} Count;

void hash_init(Count hash_table[], int m);
void print_result(Count hash_table[], int index, int m);
void merge_sort(Count hash_table[], int init, int end);
void merge(Count hash_table[], int init, int mid, int end);

int main(void)
{
	Count *hash_table;
	int n=0, m=128, i=0;
	char character;

	//starting hash table
	hash_table = (Count *)malloc(sizeof(Count) * m);
	hash_init(hash_table, m);

	//getting hash table;
	while(scanf("%c", &character) != EOF)
	{
		if(character != '\n')
		{
			hash_table[character].ascii = character;
			hash_table[character].frequency++;
		}
		else if(character == '\n')
		{
			//sorting hash table
			merge_sort(hash_table, 0, m-1);

			//get index 'til the vector start
			while(hash_table[i].frequency == 0)
			i++;

			//printing result
			print_result(hash_table, i, m);
			
			//restart hash table and auxiliar variables
			hash_init(hash_table, m);
			i=0;
		}
	}

	return 0;
}

void hash_init(Count *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		hash_table[i].ascii = 0;
		hash_table[i].frequency = 0;
    }
}

//sort algorithm
void merge_sort(Count hash_table[], int init, int end) {
	int mid;

	if(init < end) {
		mid = (init + end) / 2;
		merge_sort(hash_table, init, mid);
		merge_sort(hash_table, mid + 1, end);
		merge(hash_table, init, mid, end);
	}
}

void merge(Count hash_table[], int init, int mid, int end) {
	int com_1 = init, com_2 = mid+1, com_temp=0;
	Count *temp;

	temp = malloc((end - init + 1) * (sizeof(Count)));
	
	while(com_1<=mid && com_2<=end) {
		if(hash_table[com_1].frequency <= hash_table[com_2].frequency) {
			temp[com_temp] = hash_table[com_1++];
		}
		else {
			temp[com_temp] = hash_table[com_2++];
		}
		com_temp++;
	}
	while(com_1 <= mid) {
		temp[com_temp++] = hash_table[com_1++];
	}
	while(com_2 <= end) {
		temp[com_temp++] = hash_table[com_2++];
	}
	for(com_temp=init; com_temp<=end; com_temp++) {
		hash_table[com_temp] = temp[com_temp-init];
	}
	free(temp);
	
}

//print result
void print_result(Count hash_table[], int index, int m)
{
	int i;
	
	for(i=index; i<m; i++)
		printf("%d %d\n", hash_table[i].ascii, hash_table[i].frequency);
	printf("\n");
}