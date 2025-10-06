#include <stdio.h>
#include <stdlib.h>

// definitions of which segments make up each number
static const int digits[10][7] = {{1, 1, 1, 0, 1, 1, 1}, {0, 0, 1, 0, 0, 1, 0},
                                  {1, 0, 1, 1, 1, 0, 1}, {1, 0, 1, 1, 0, 1, 1},
                                  {0, 1, 1, 1, 0, 1, 0}, {1, 1, 0, 1, 0, 1, 1},
                                  {1, 1, 0, 1, 1, 1, 1}, {1, 0, 1, 0, 0, 1, 0},
                                  {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 0}};

// function to print a number as segments
void print_digit(int digit) {
  printf("\n %c \n", (digits[digit][0]) ? '-' : ' ');
  printf("%c %c\n", (digits[digit][1]) ? '|' : ' ',
         (digits[digit][2]) ? '|' : ' ');
  printf(" %c \n", (digits[digit][3]) ? '-' : ' ');
  printf("%c %c\n", (digits[digit][4]) ? '|' : ' ',
         (digits[digit][5]) ? '|' : ' ');
  printf(" %c \n", (digits[digit][6]) ? '-' : ' ');
}

int main(void) {
  while (1) {
    // recieve number as input
    char input[2];
    printf("Input a number, or q to quit: ");
    scanf("%s", input);

    // check if number is valid and if it is then print it as segments
    if (input[0] == 0 || input[1] != 0) {
      printf("Please input a single digit\n");
    } else if (input[0] >= 48 && input[0] <= 57) {
      print_digit(input[0] - '0');
    } else if (input[0] == 113 || input[0] == 81) {
      exit(1);
    } else {
      printf("Invalid input!\n");
    }
  }
}
