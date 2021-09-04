#include <stdio.h>
#include <stdlib.h>
#define MAX 50;
#define true 1;
#define false 0;

typedef int bool;
typedef int TYPEKEY;

typedef struct 
{
	TYPEKEY key;
} Register;

typedef struct 
{
	Register item[max];
	int top;
}Stack;

/* start stack */
void init_stack(Stack *stack)
{
	stack->top = -1;
}

/* elements quantity */
int tam_stack(Stack *stack)
{
	return stack->top + 1;
}

/* print stack */
void print_stack(Stack *stack)
{
	int i;

	for(i=stack->top; i>=0; i--) 
	{
		printf("%d", stack[i]->key);
		if(i > 0)
			printf(" ");
	}
	printf("\n");
}

/* insert item */
int push(Stack *stack, Register register)
{
	if(stack->top >= MAX-1)
		return 0;

	stack->top = stack->top + 1;
	stack->item[stack->top] = register;
	return 1;
}

/* delete item */
int pop(Stack *stack, Register* register)
{
	if(stack->top == -1)
		return 0;

	*register = stack->item[stack->top];
	stack->top = stack->top - 1;

	return 1;
}


/* restart stack */
void restart_stack(Stack* stack)
{
	init_stack(stack);
}

int main(void)
{

 
	return 0;
}