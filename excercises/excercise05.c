#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      printf("Fizz");
    }
    if (i % 5 == 0) {
      printf("Buzz");
    }
    if (i % 7 == 0) {
      printf("Bazz");
    }
    if (i % 9 == 0) {
      printf("Bop");
    }
    if (!(i % 3 == 0 || i % 5 == 0 || i % 7 == 0 || i % 9 == 0)) {
      printf("%d", i);
    }
    printf("\n");
  }
}
