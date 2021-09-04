#include <stdio.h>
#include <stdlib.h>

typedef int TYPEKEY;

typedef struct
{
	TYPEKEY key;
}Register;

typedef struct aux
{
	Register register;
	struct aux *next;
}Item;

typedef Item *PONT;

typedef struct 
{
	PONT top; /* top is a variable with type Item * */
	/* could be created a variable to count the numbers of elements */
}Stack;



void init_stack(Stack *stack)
{
	stack->top = NULL;
}

int len_stack(Stack *stack)
{
	PONT end = stack->top;
	int len;

	while(end != NULL)
	{
		len++;
		end = end->top;
	}

	return len;
}

int empty_stack(Stack *stack)
{
	if(stack->top == NULL)
		return 1;
	return 0;
}

boid print_stack(Stack *stack)
{
	PONT end = stack->top;

	while(end != NULL)
	{
		printf("%d", end->register->key);
		if(end->top != NULL)
			printf(" ");
	}

	printf("\n");
}

/* insert item */
int push(Stack *stack, Register register)
{
	PONT new = (PONT) malloc(sizeof(Item));
	new->register = register;
	new->next = stack->top;
	stack->top = new;
	return 1; 
}

/* delete item */
int pop(Stack *stack, Register *register)
{
	if(stack->top == NULL)
		return 0;

	*register = stack->top->register;
	PONT delete = stack->top;
	stack->top = stack->top->next;
	free(delete);
	return 1;
}

void restart_stack(Stack *stack)
{
	PONT delete;
	PONT position = stack->top;

	/* free memoty of all valid elements */
	while(position != NULL)
	{
		delete = position;
		position = position->next;
		free(delete);
	}

	stack->top == NULL;
}

int main(void)
{


	return 0;
}