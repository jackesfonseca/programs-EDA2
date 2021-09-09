#include <stdio.h>
#include <stdlib.h>

typedef struct aux
{
	int note;
	int frequency;
} Count;

void hash_init(Count *hash_table, int m);
void merge_sort(Count hash_table[], int init, int end);
void merge(Count hash_table[], int init, int mid, int end);

int main(void)
{
	Count *hash_table;
	int i, note, m=101, amount;

	hash_table = (Count *)malloc(sizeof(Count) * m);
	hash_init(hash_table, m);

	scanf("%d", &amount);

	for(i=0; i<amount; i++)
	{
		scanf("%d", &note);
		hash_table[note].note = note;
		hash_table[note].frequency++;
	}

	/* sort data */
	merge_sort(hash_table, 0, m-1);

	printf("%d\n", hash_table[m-1].note);

	return 0;
}

void hash_init(Count *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		hash_table[i].note = 0;
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