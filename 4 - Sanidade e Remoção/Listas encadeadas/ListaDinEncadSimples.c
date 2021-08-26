#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int item;
  struct node *next;
}Node;

int insert_init(Node **list, int elem) {
  Node *new_node = (Node*) malloc(sizeof(Node));

  if(new_node) {
    new_node->item = elem;
    new_node->next = *list;
    *list = new_node;
    return 1;
  }
  else
    return 0;
}

int insert_end(Node **list, int elem) {
  Node *aux, *new_node = (Node*) malloc(sizeof(Node));

  //node created with success
  if(new_node) {
    new_node->item = elem;
    new_node->next = NULL;

    //is the first node?
    if(*list == NULL)
      *list = new_node;

    //otherwise
    else {
      aux = *list;
      while(aux->next != NULL)
        aux = aux->next;
      aux->next = new_node;
    }

  }

  //something went wrong to create the list
  else
    return 0;
}

int insert_mid(Node **list, int elem, int ant) {
  Node *aux, *new_node = (Node*) malloc(sizeof(Node));

  if(new_node) {
    new_node->item = elem;
    //is it the first node?
    if(*list == NULL) {
      new_node->next = NULL;
      *list = new_node;
    }
    //otherwise
    else {
      aux = *list;
      while(aux->item != ant && aux->next)
        aux = aux->next;
      new_node->next = aux->next;
      aux->next = new_node;
    }
  }
  else
    return 0;
}

void print_list(Node *node) {
  printf("\nLista: ");
  while(node) {
    printf("%d ", node->item);
    node = node->next;
  }
  printf("\n");
}

int main(void) {
  Node *list = NULL;

  insert_init(&list, 4);
  insert_init(&list, 2);
  insert_init(&list, 1);
  insert_end(&list, 5);
  insert_mid(&list, 3, 2);

  print_list(list);

  return 0;
}
