#include <stdio.h>

struct Node {
	unsigned long address;
	unsigned long before;
	unsigned long after;
};

int main(void) {
	struct Node node[250000];
	int i=0;

    //getting stack
	while(scanf("%c %c %c", &node[i].address, &node[i].before, &node[i].after) != EOF)
		i++;

    printf("%d\n", i);
    for(int k=0; k<i; k++) {
        printf("\n%lu, %lu, %lu", node[k].address, node[k].before, node[k].after);
    }

	return 0;
}
