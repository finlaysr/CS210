#include <stdio.h>

int main(void) {
  int miles = 0;
  double km = 0;
  float kmSingle = 0;

  double kmArray[27];
  double other = 2.5;

  while (miles < 28) {

    km = 1.60934 * miles;
    kmSingle = 1.60934 * miles;
    // printf("%d miles = %.3f km (%.6f kmSingle)\n", miles, km, kmSingle);

    kmArray[miles] = 1.60934 * miles;
    miles = miles + 1;
  }

  for (int i = 0; i < 27; i++) {
    printf("%2d miles = %.6f km\n", i, kmArray[i]);
  }
  printf("other = %f\n", other);
  return 0;
}
