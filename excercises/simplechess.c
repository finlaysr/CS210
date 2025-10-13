#include <stdio.h>
#include <stdlib.h>

void getPosition(int *xy, char *message, int checkEmpty);
void movePiece(char letter, int num);
void printBoard();

char board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

int main(void) {
  printBoard();
  while (1) {
    int prev_xy[2];
    int new_xy[2];
    getPosition(prev_xy, "\nSelect piece: ", 0);
    getPosition(new_xy, "Choose position: ", 1);

    char piece = board[prev_xy[1]][prev_xy[0]];
    board[prev_xy[1]][prev_xy[0]] = ' ';
    board[new_xy[1]][new_xy[0]] = piece;

    printBoard();
  }
}

void getPosition(int *xy, char *message, int checkEmpty) {
  int valid = 0;
  char letter;
  int num;
  while (!valid) {
    valid = 1;
    char input[4];

    printf("%s", message);
    fgets(input, 4, stdin);

    if (input[0] == 0 || input[1] == 0) {
      printf("Please enter a position, eg F4\n");
      valid = 0;
    }

    if (input[0] != 0) {
      letter = input[0];
    }
    if (input[1] != 0) {
      num = input[1] - '0';
    }

    if (letter == 'q') {
      exit(0);
    }

    if (letter < 65 || letter > 72 || num < 1 || num > 8) {
      printf("Please enter a position between A1 and H8\n");
      valid = 0;
    }

    if (!checkEmpty && (board[8 - num][letter - 'A'] == ' ')) {
      printf("Please choose a piece to move\n");
      valid = 0;
    }

    if (checkEmpty && (board[8 - num][letter - 'A'] != ' ')) {
      printf("Please choose an empty space to move to\n");
      valid = 0;
    }
  }
  xy[0] = letter - 'A';
  xy[1] = 8 - num;
}

void printBoard() {
  int i = 0;
  while (i < 8) {
    int j = 0;
    printf("%d ", 8 - i);
    while (j < 8) {
      printf("%c", board[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("  ABCDEFGH\n");
}
