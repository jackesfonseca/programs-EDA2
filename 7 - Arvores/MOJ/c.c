#include <stdio.h>
#include <stdlib.h>
#define true 1;
#define false 0;

typedef int bool;
typedef int TYPEKEY;

/** BINARY THREE STRUCTS **/

typedef struct aux_tree
{
	TYPEKEY key;
	struct aux_tree *left, *right;
} Node;

typedef Node *PONT_TREE;

/** END **/

/** DYNAMIC STACK STRUCTS **/

typedef struct
{
	PONT_TREE node;
}Register;

typedef struct aux_stack
{
	Register reg;
	struct aux_stack *next;
}Item;

typedef Item *PONT;

typedef struct 
{
	PONT top; /* top is a variable with type Item * */
	/* could be created a variable to count the numbers of elements */
}Stack;

/**  END  **/

PONT_TREE init()
{
	return NULL;
}

PONT_TREE create_node(TYPEKEY key)
{
	PONT_TREE new_node = (PONT_TREE)malloc(sizeof(PONT_TREE));
	new_node->key = key;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

/* ignore equal keys */
PONT_TREE insert(PONT_TREE root, PONT_TREE node)
{
	if(root == NULL)
		return (node);
	if(node->key < root->key)
		root->left = insert(root->left, node);
	else
		root->right = insert(root->right, node);
	return (root);
}

/* init stack */
void init_stack(Stack *stack)
{
	stack->top = NULL;
}

/* insert item */
int push(Stack *stack, Register reg)
{
	PONT new = (PONT) malloc(sizeof(Item));
	new->reg = reg;
	new->next = stack->top;
	stack->top = new;
	return 1; 
}

/* delete item */
PONT_TREE pop(Stack *stack)
{
    Register *reg;
    
	if(stack->top == NULL)
		return NULL;

	*reg = stack->top->reg;
	PONT delete = stack->top;
	stack->top = stack->top->next;
	free(delete);
	return reg->node;
}

int empty_stack(Stack *stack)
{
	if(stack->top == NULL)
		return 1;
	return 0;
}


/* Pre order: root -> left -> right*/
void pre_order2(PONT_TREE root)
{
	PONT_TREE aux = root;
	Register reg;
	Stack stack;
	int end = 1;
	
	init_stack(&stack);

	do
	{
		if(aux != NULL)
		{
			printf("%d ", aux->key);
			if(aux->right != NULL)
			{
				reg.node = aux->right;
				push(&stack, reg);

			}
			aux = aux->left;
		}

		else if(empty_stack(&stack))
			end = 0;
		else
			pop(&stack);
	} while(end != 0);

	printf("\n");
}

/* Pre order: root -> left -> right*/
void pre_order(PONT_TREE root)
{
	PONT_TREE aux = root;
	Register reg;
	Stack stack;
	
	init_stack(&stack);

	reg.node = aux->right;
	push(&stack, reg);

	while(!empty_stack(&stack))
	{
		if(aux != NULL)
		{
			printf("%d ", aux->key);

			if(aux->right != NULL)
			{
				reg.node = aux->right;
				push(&stack, reg);
			}
			aux = aux->left;
		}
		else
		{
			aux = pop(&stack);
		}		
	}

	printf("\n");
}

int main(void)
{
	PONT_TREE root = init();
	PONT_TREE node;
	int item;

	while(scanf("%d", &item) != EOF)
	{
		node = create_node(item);
		root = insert(root, node);
	}

	pre_order(root);

	return 0;
}