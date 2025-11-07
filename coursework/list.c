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
