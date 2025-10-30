#include <stdio.h>
void myPrint(char *c);
void myOtherPrint(char *str);

int main(void) {
  printf("hello\n");

  int i = 17;
  int j = 45;
  double x = 2.7;

  int *p = &i;
  // pointer to address of int i

  printf("i =  %d,   &i = %ld\n", i, &i);
  printf("j =  %d,   &j = %ld\n", j, &j);
  printf("x =  %.2f, &x = %ld\n", x, &x);

  printf("p =  %ld, &p = %ld, *p = %d\n", p, &p, *p);
  // p = &i

  p = &j;
  printf("p =  %ld, &p = %ld, *p = %d\n", p, &p, *p);

  *p = 100;
  // update value (j) that p is pointing to
  printf("j =  %d,   &j = %ld\n", j, &j);
  printf("p =  %ld, &p = %ld, *p = %d\n", p, &p, *p);

  // p = 9;
  // can't do this since p is a pointer to an int, not an int

  *(&i) = 3;
  printf("i =  %d,   &i = %ld\n", i, &i);

  char array[10] = "hello\n";
  char *q = &(array[0]);
  // &(array[0]) == array

  printf("q =  %ld,  *q = %c\n", q, *q);
  printf("(q+2) =  %ld,  *(q+2) = %c\n", (q + 2), *(q + 2));
  // *(q+2) == q[2]
  printf("(q+17) =  %ld,  *(q+17) = %c\n", (q + 17), *(q + 17));

  // 2 ways to print a string
  myPrint(q);
  myPrint(q);
  return 0;
}

void myPrint(char *c) {
  if (*c == '\0') {
    return;
  }
  printf("%c", *c);
  myPrint(c + 1);
}

void myOtherPrint(char *str) {
  for (char *c = str; *c != '\0'; c++) {
    printf("%c", *c);
  }
}
