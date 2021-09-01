#include <stdio.h>
#include <stlib.h>
#define true 1;
#define false 0;

typedef int bool;
typedef int TYPEKEY;

typedef struct aux
{
	TYPEKEY key;
	struct aux *left, *right;
} Node;

typedef Node *POINT;

int main(void)
{


	return 0;
}