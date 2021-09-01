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

typedef Node *PONT;

PONT init()
{
	return NULL;
}

PONT create_node(TYPEKEY key)
{
	new_node = (PONT)malloc(sizeof(PONT));
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
		node->left = insert(root->left, node);
	else
		node->right = insert(root->right, node);
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

int main(void)
{
	PONT root = init();
	PONT node; 
	
	node = create_node(10);
	root = insert(root, node);
	node = create_node(8);
	root = insert(root, node);
	node = create_node(15);
	root = insert(root, node);
	node = create_node(2);
	root = insert(root, node);
	node = create_node(12);
	root = insert(root, node);
	node = create_node(20);
	root = insert(root, node);
	node = create_node(30);
	root = insert(root, node);

	PONT s_node = search(root, 2);

	printf("%d\n", count_nodes(root));

	return 0;
}