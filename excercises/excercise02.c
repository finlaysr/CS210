#include <stdio.h>

int main(void) {

  char name[51];
  printf("What is your name: ");
  scanf("%50s", name);

  int age;
  printf("What is your age: ");
  scanf("%d", &age);

  char animal[51];
  printf("What is your favorite animal: ");
  scanf("%50s", animal);

  printf("Your name is: %s, your age is: %d, and your favorite animal is %s\n",
         name, age, animal);
}
