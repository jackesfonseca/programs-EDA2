#include <stdio.h>

struct Node {
	unsigned long address;
	unsigned long before;
	unsigned long after;
};

int main(void) {
	struct Node node[250000];
	int i=0;

	while(scanf("%lu %lu %lu", &node[i].address, &node[i].before, &node[i].after) != 3)
		i++;

	

	return 0;
}