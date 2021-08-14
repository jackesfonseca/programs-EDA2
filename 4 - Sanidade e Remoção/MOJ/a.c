#include <stdio.h>

struct Node {
	unsigned long address;
	unsigned long previous;
	unsigned long next;
};

int main(void) {
	struct Node node[250000];
	int i=0, j=0;

    //getting stack
	while(scanf("%lx %lx %lx ", &node[i].address, &node[i].previous, &node[i].next) != EOF)
		i++;

    for(int k=1; k<i; i++) {
    	if(node[j].next == node[k].address) {
    		//found

    	}
    }

	return 0;
}