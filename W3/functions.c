#include <stdio.h>

// tell compiler that myMult exists since it is decalred after it is used
// should not put code here to ensure that main function is at top
// should decalre all non main functions here at top
int myMult(int a, int b);

// global variable
int a = 0;

int main(void) {
  int x = 7;

  // Booleans

  if (x < 10) {
    printf("x is less than %d\n", 10);
    printf("Truth value: %d, negated: %d\n", (x < 10), !(x < 10));
  }

  printf("42 in boolean is %d, !42 is %d\n", !!42, !42);
  printf("0 in boolean is %d, !0 is %d\n", !!0, !0);
  // anything that is not zero is true

  // Short circuting
  if (0 || printf("Launch")) {
    printf("Oops\n");
  }
  if (1 || printf("Launch")) {
    printf("Oops\n");
  }

  // Assignments
  int y = (x = 17);
  int z = (x == 17);
  printf("x = %d, y = %d, z = %d\n", x, y, z);

  x = 0;
  char c;
  printf("type q to quit\n");
  while ((c = getchar()) != 'q') {
    printf("c = %c (%d)\n", c, c);
  }

  // Calling functions
  int a = myMult(5, 6);
  printf("a is %d\n", a);

  // Scope
  int res = 12;
  a = 6;
  myMult(12, 2);
  printf("res: %d, a = %d\n", res, a);

  return 0;
}

int myMult(int x, int y) {
  int result = x * y;
  a = result;
  printf("Multiplying %d and %d is %d\n", x, y, result);
  return result;
}
