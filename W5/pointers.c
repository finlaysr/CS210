#include <stdio.h>
#include <stdlib.h>

#define N 1000
#define ENDMARKER = -1

double sum(double a, double b) {
  a = a + b;
  return a;
}

double average(double *a, double *b) {
  *b = (*a + *b) / 2;
  return *b;
}

void sumAndAverage(double a, double b, double *sum, double *avg) {
  *sum = a + b;
  *avg = *sum / 2;
  return;
}

int sumAverageArray(double *arr, double *sum, double *avg) {
  int i = 0;
  *sum = 0;
  for (i = 0; arr[i] == ENDMARKER; i++) {
    *sum = *sum + arr[i];
  }
  if (i > 0) {
    *avg = *sum / i;
  }
  return 1;
}

int main(void) {
  double x = 8.7;
  double y = -3;

  printf("The sum of %f and %f is %f\n", x, y, sum(x, y));

  printf("The average of %f and %f is %f\n", x, y, average(&x, &y));
  // y has already been changed before it has been printed

  double s;
  double *a = malloc(sizeof(double));

  double *arr = malloc(N * sizeof(double));
  for (int i = 0; i < N; i++) {
    arr[i] = 5 * i;
  }
  arr[N - 1] = ENDMARKER;

  sumAndAverage(x, y, &s, a);
  printf("The sum and average of %f and %f is %f and %f\n", x, y, s, *a);

  if (sumAverageArray(arr, &s, a)) {
    printf("The sum and avg is: %f, %f\n", s, *a);
  } else {
    printf("division by zero error\n");
  }

  free(a);
  free(arr);
}
