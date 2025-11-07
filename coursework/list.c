#include "list.h"
#include <stdlib.h>
#include <string.h>

Node *new_node(char *value) {
  // Create space for node with malloc
  Node *new = malloc(sizeof(Node));

  // Copy value into node and set next to null
  new->value = value;
  new->next = NULL;

  return new;
}

void delete_node(Node *node) {
  free(node);
  node = NULL;
}

void push(Node *node, char *value) {
  Node *curr = node;
  while (curr->next != NULL) {
    curr = curr->next;
  }

  curr->next = new_node(value);
}
