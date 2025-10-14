#include <stdio.h>
void print_array(int *ptr, int len);
void print_2d_array(char *ptr, int ylen, int xlen);

int main(void) {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  print_array(arr, 10);

  char arr2[4][5] = {
      {'A', 'B', 'C', 'D', 'E'},
      {'F', 'G', 'H', 'I', 'J'},
      {'K', 'L', 'M', 'N', 'O'},
      {'P', 'Q', 'R', 'S', 'T'},
  };
  print_2d_array(*arr2, 4, 5);

  return 0;
}

void print_array(int *ptr, int len) {
  len--;
  while (len--) {
    printf("%d, ", *ptr++);
  }

  printf("%d\n", *(ptr));
}

void print_2d_array(char *ptr, int ylen, int xlen) {
  while (ylen--) {
    int x = xlen - 1;
    while (x--) {
      printf("%c, ", *ptr++);
    }
    printf("%c\n", *(ptr++));
  }
}
