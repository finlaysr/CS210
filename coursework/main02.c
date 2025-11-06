#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Node *root = new_node("First!");
  if (root->next == NULL) {
    printf("%s\n", root->value);
  }
  free(root);
  return 0;
}
