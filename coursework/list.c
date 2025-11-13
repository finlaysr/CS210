#include "list.h"
#include <stdlib.h>
#include <string.h>

Node *new_node(char *value) {
  // Create space for node with malloc
  Node *new = malloc(sizeof(Node));

  // Malloc failed
  if (!new) {
    return NULL;
  }

  // Copy value into node and set next to null
  new->value = value;
  new->next = NULL;

  return new;
}

void delete_node(Node *node) {
  free(node);
  node = NULL;
}

void push(List node, char *value) {
  List curr = node;
  if ((*curr) == NULL) {
    *curr = new_node(value);

  } else {
    while ((*curr)->next != NULL) {
      curr = &(*curr)->next;
    }
    (*curr)->next = new_node(value);
  }
}

// List strucure
List new_list() {
  List list = malloc(sizeof(Node **));

  // Malloc failed
  if (!list) {
    return NULL;
  }
  *list = NULL;
  return list;
}

char *pop(List node) {
  // If list is empty
  if ((*node) == NULL) {
    return NULL;
  }

  // Singelton
  if ((*node)->next == NULL) {
    char *value = (*node)->value;
    delete_node(*node);
    *node = NULL;
    return value;
  }

  // More than one element
  if ((*node)->next->next == NULL) {
    char *value = (*node)->next->value;
    delete_node((*node)->next);
    (*node)->next = NULL;
    return value;
  }

  return pop(&(*node)->next);
}
