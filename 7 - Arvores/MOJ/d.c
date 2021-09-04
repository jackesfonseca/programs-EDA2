#include <stdio.h>
#include <stdlib.h>
#define true 1;
#define false 0;

typedef int bool;
typedef int TYPEKEY;

typedef struct aux
{
	TYPEKEY key;
	struct aux *left, *right;
} Node;

typedef Node *PONT;

PONT init()
{
	return NULL;
}

PONT create_node(TYPEKEY key)
{
	PONT new_node = (PONT)malloc(sizeof(PONT));
	new_node->key = key;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

/* ignore equal keys */
PONT insert(PONT root, PONT node)
{
	if(root == NULL)
		return (node);
	if(node->key < root->key)
		root->left = insert(root->left, node);
	else
		root->right = insert(root->right, node);
	return (root);
}

PONT search(PONT root, TYPEKEY key)
{
	if(root == NULL)
		return (NULL);
	if(key == root->key)
		return (root);
	if(key < root->key)
		return search(root->left, key);
	return search(root->right, key);

}

int count_nodes(PONT root)
{
	if(!root)
		return 0;
	return (count_nodes(root->left) + 1 + count_nodes(root->right));
}

/* binary search without recursion */
PONT binary_search(PONT root, TYPEKEY key, PONT *father)
{
	PONT current = root;
	*father = NULL;

	while(current)
	{
		if(current->key == key)
			return current;

		*father = current;

		if(key < current->key)
			current = current->left;
		else
			current = current->right;
	}
	return NULL;
}

PONT remove_node(PONT root, TYPEKEY key)
{
	PONT father, node, p, q;

	node = binary_search(root, key, &father);

	if(node == NULL)
		return root;

	if (!node->left || !node->right)
	{
		if(!node->left)
			q = node->right;
		else
			q = node->left;
	}
	else
	{
		p = node;
		q = node->left;
		while(q->right)
		{
			p = q;
			q = q->right;
		}

		if(p != node)
		{
			p->right = q->left;
			q->left = node->left;
		}
		q->right = node->right;
	}

	if(!father)
	{
		free(node);
		return q;
	}

	if(key < father->key)
		father->left = q;
	else
		father->right = q;

	free(node);
	return root;
}

/* Pre order: root -> left -> right*/
void pre_order(PONT root)
{
	if(root != NULL)
	{
		printf("%d", root->key);
		printf(" ");
		pre_order(root->left);
		pre_order(root->right);
	}
	
}

/* In order: left -> root -> right */
void in_order(PONT root)
{
	if(root != NULL)
	{
		in_order(root->left);
		printf("%d", root->key);
		printf(" ");
		in_order(root->right);
	}
	
}

/* Post order: left -> right -> root */
void post_order(PONT root)
{
	if(root != NULL)
	{
		post_order(root->left);
		post_order(root->right);
		printf("%d", root->key);
		printf(" ");
	}
	
}

int main(void)
{
	PONT root = init();
	PONT node; 
	int item;

	while(scanf("%d", &item) != EOF)
	{
		node = create_node(item);
		root = insert(root, node);
	}

	pre_order(root);
	printf(".\n");
	in_order(root);
	printf(".\n");
	post_order(root);
	printf(".\n");

	return 0;
}