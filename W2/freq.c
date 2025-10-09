#include <stdio.h>

int main(void) {
  char input[1000];
  int freq[28] = {0}; // aplhabet (26) + whitespace (1) + everything else (1)
  printf("Enter input: ");
  fgets(input, 1000, stdin); // read up to 1000 characters from terminal

  for (int i = 0; input[i] != '\0'; i++) {
    char c = input[i];
  }
}
