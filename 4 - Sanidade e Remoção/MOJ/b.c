#include <stdio.h>

struct Node {
	unsigned long address;
	unsigned long previous;
	unsigned long next;
	int index;
};

int main(void) {
	struct Node node[250000];
	struct Node temp[250000]; //store nodes tha will be deleted
	int i=0;

  //getting stack
	/**
	node[0] has the PTR1 and node[1] has the PTR2
	*/
	while(scanf("%c %c %c ", &node[i].address, &node[i].previous, &node[i].next) != EOF)
		i++;

	//searching for the position from PTR1 'til PTR2





	return 0;
}
