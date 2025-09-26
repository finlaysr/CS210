#include <stdio.h>

int main(void)
{
  int i = 42;

  char ch = 'A';

  printf("The answer is %04d. Thanks for the fish, %c.\n", i, ch);

  double fl = 3.1415926535;

  printf("Pi is %.10f\n", fl);

  char name[20] = "Andrew";

  printf("Enter value of i: ");
  scanf("%d", &i);

  printf("Enter value of name: ");
  scanf("%19s", name);

  printf("Hello %s\nValue of i = %d\n", name, i);

  // You can also scan into several variables at once (use with care)
  printf("Enter value of name. ");
  printf("Enter value of i. ");
  scanf("%19s %d", name, &i);

  printf("Hello %s, i = %d\n", name, i);

  return 0;
}
/*

  %d    decimal digit
  %s    string
  %c    char
  %f    float
  ...

*/
