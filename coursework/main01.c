#include "list.h"
#include <stdio.h>

int main(void) {
  Node root = {"First!", NULL};
  if (root.next == NULL) {
    printf("%s", root.value);
  }
  return 0;
}
