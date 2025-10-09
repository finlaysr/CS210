#include <stdio.h>

int main(void) {
  double myArray[30];

  myArray[0] = 3.14;
  myArray[7] = 2.71;

  printf("The value at slot 7 is %f\n", myArray[7]);

  int myOtherArray[5] = {0};

  printf("The value at slot 4 is %d\n", myOtherArray[4]);

  char myString[20] = {'h', 'i'};

  char myOtherString[20] = "Hello";

  for (int c = 'A'; c < 'z'; c++) {
    printf("%c = %d\n", c, c);
  }
}
