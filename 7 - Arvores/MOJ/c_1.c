#include <stdio.h>
#include <stdlib.h>

typedef int bool;
typedef int TYPEKEY;

typedef struct aux_tree
{
	TYPEKEY key;
	struct aux_tree *left, *right;
} Node;

typedef Node *PONT_TREE;


/* Pre order: root -> left -> right*/
void pre_ordem(PONT_TREE root)
{
	PONT_TREE aux = root;
	Register reg;
	Stack stack;
	int end = 1;
	
	init_stack(&stack);

	/* 1st step: push root */
	reg.node = aux;
	push(&stack, reg);

	while(!empty_stack(&stack))
	{
		/* current recieve stack's top */
		aux = pop(&stack);

		/* print current */
		printf("%d ", aux->key);

		/* pop from stack */
		//pop(&stack);

		if(aux->right != NULL) 
		{
			reg.node = aux->right;
			push(&stack, reg);
		}
		if(aux->left != NULL)
		{
			reg.node = aux->left;
			push(&stack, reg);
		}
	}

	printf("\n");
}