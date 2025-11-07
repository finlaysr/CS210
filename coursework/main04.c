#include "list.h"
#include <stdio.h>

int main(void) {
  Node *root = new_node("First!\n");
  push(root, "Second!\n");
  push(root, "Third!\n");
  push(root, "Fourth!");

  Node *current = root;

  printf("HERE!\n");
  while (current != NULL) {
    printf("%s", current->value);
    current = current->next;
  }

  return 0;
}
