#include "list.h"
#include <stdlib.h>

Node *new_node(char value[100]) {
  // Create space for node with malloc
  Node *new = malloc(sizeof(Node));

  // Copy value into node and set next to null
  new->value = value;
  int i = 0;
  while (value[i] != 0) {
    new->value[i] = value[i];
    i++;
  }
  new->next = NULL;

  return new;
}
