#include <stdio.h>

void getInput(char *letter, int *num);
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
  char l;
  int n;
  printBoard();
  while (l != 'q') {
    printf("\nSelect piece: ");
    getInput(&l, &n);
    printf("\n");
    printf("Contents: %c, %d\n", l, n);
    movePiece(l, n);
  }
}

void getInput(char *letter, int *num) {
  char input[3];
  scanf("%3c", input);

  if (input[0] != 0) {
    *letter = input[0];
  }
  if (input[1] != 0) {
    *num = input[1] - '0';
  }
}

void movePiece(char letter, int num) {
  if (letter < 65 || letter > 72 || num < 1 || num > 8) {
    printf("Invalid input, must be between A1 and H8!\n");
    return;
  }
  int xy[2] = {letter - 'A', 8 - num};
  printf("x: %d, y: %d\n", xy[0], xy[1]);

  if (board[xy[1]][xy[0]] != ' ') {
    printf("Invalid space!\n");
    return;
  }

  board[xy[1]][xy[0]] = 'x';

  printBoard();
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
