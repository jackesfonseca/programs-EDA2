#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

typedef struct hash_table
{
	int row;
	int column;
} Hash_table;

/*
	sondagem L' C' P
	dominacao P
*/

void hash_init(Count hash_table[], int m);
 
int main(void)
{
	int d, p_d, t_game, m, score; /* game score */
	int row, column, p_i, t_loop /* start game data */
	Hash_table *hash_table;
	int m = 262139;
	struct timeval start, end; 
	double program_time_t, program_time_s, program_time_m;
	char command[256];

	hash_table = (Hash_table *)malloc(sizeof(Hash_table) * m);
	hash_init(hash_table, m);
	scanf("%d %d %d %d", &row, &column, &p_i, &t_loop);

	gettimeofday(&start, NULL);

	while(t_loop >= 0)
	{


		t_loop--;
	}

	gettimeofday(&end, NULL);

	program_time_s = end.tv_sec - start.tv_sec;
	program_time_m = (end.tv_usec - start.tv_usec) / 1000000.0;
	program_time_t = program_time_m + program_time_s;

	return 0;
}

void hash_init(Count *hash_table, int m)
{
	int i;

	for(i=0; i<m; i++)
	{
		hash_table[i].row = 0;
		hash_table[i].column = 0;
    }
}