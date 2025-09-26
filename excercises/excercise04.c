#include <stdio.h>

int main(void) {
  int input;
  printf("Enter a two-digit positive integer: ");
  scanf("%d", &input);

  if (input > 99 || input < 0) {
    printf("Invalid input!\n");

  } else {
    int output = ((input % 10) * 10) + (input / 10);
    printf("The reversal is: %02d\n", output);
  }
}
