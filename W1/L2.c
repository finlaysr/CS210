#include <stdio.h>

int main(void) {
  int i = 78;
  char ch = 'a';
  printf("This will be printed. i = %d, ch = %c\n", ch, i);

  double pi = 3.1415928595;
  printf("2*pi = %0.10f\n", 2 * pi);

  char name[20] = "Andrew"; // can only contain 19 characters
  printf("Hi %s!!!!\n", name);

  int age;
  printf("What is your name, and age: ");
  scanf("%19s %d", name, &age);

  printf("Hello, %s, you are %d\n", name, age);

  return 0;
}
