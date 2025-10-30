#include <stdio.h>

#define ROWS 5
#define COLS 10

int bubble_sort(int *arr[], int rows, int columns);

int arr_order(int *arr0, int *arr1, int len);
int main(void) {
  int v1[COLS] = {-60, 72, -97, -99, 65, 61, 84, 35, 12, 81};
  int v2[COLS] = {90, 15, 40, -12, -81, -24, 27, -39, -13, -47};
  int v3[COLS] = {-60, 31, 8, 89, 22, -19, 45, 95, -68, 3};
  int v4[COLS] = {-17, -60, -91, -30, 34, 73, -100, 56, -44, -23};
  int v5[COLS] = {71, -10, -80, 25, -98, 0, -46, 80, -46, 29};

  // array of pointers to arrays
  int *ptr_arr[ROWS] = {v1, v2, v3, v4, v5};

  bubble_sort(ptr_arr, ROWS, COLS);

  for (int i = 0; i < ROWS; i++) {
    printf("Position %d:  ", i);
    for (int j = 0; j < COLS; j++) {
      printf("%d, ", ptr_arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

int arr_order(int *arr0, int *arr1, int len) {
  for (int i = 0; i < len; i++) {
    if (arr0[i] > arr1[i]) {
      return 0;
    } else if (arr1[i] > arr0[i]) {
      return 1;
    }
  }
}

int rec_arr_order(int *arr0, int *arr1, int len) {
  if (!len)
    return 1;
  if (arr0[0] > arr1[0]) {
    return 0;
  } else if (arr1[0] > arr0[0]) {
    return 1;
  }
  return rec_arr_order(arr0 + 1, arr1 + 1, len - 1);
}

int bubble_sort(int *arr[], int rows, int columns) {
  int swapped = 1;
  while (swapped) {
    swapped = 0;

    for (int i = 1; i < ROWS; i++) {
      if (arr[i - 1][0] > arr[i][0]) {
        int *temp = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = temp;
        swapped = 1;
      }
    }
  }

  return 1;
}
