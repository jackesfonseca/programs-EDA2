#include <stdio.h>
#include <stdlib.h>
#define true 1;
#define false 0;

typedef int bool;
typedef int TYPEKEY;

/** BINARY THREE STRUCTS **/
typedef struct aux
{
	TYPEKEY key;
	struct aux *left, *right;
} Node;

typedef Node *PONT_TREE;

PONT_TREE init()
{
	return NULL;
}
/** END **/

/** DYNAMIC STACK STRUCTS **/
typedef struct
{
	Node node;
} Register;

typedef struct aux
{
	Register register;
	struct aux *next;
} Item;

typedef Item *PONT_STACK;

typedef struct 
{
	PONT_STACK top;
} Stack;
/**  END  **/

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

/* Pre order: root -> left -> right*/
void pre_order(PONT_TREE root)
{
	
	
}

void init_stack(Stack *stack)
{
	stack->top = NULL;
}

/* insert item */
void push(Stack *stack, Register register)
{
	PONT new = (PONT) malloc(sizeof(Item));
	new->register = register;
	new->next = stack->top;
	stack->top = new;
	return 1; 
}

/* delete item */
void pop(Stack *stack, Register register)
{
	if(stack->top == NULL)
		return 0;

	*register = stack->top->register;
	PONT delete = stack->top;
	stack->top = stack->top->next;
	free(delete);
	return 1;
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