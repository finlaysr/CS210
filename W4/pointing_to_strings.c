#include <stdio.h>
#include <stdlib.h>

void myFree(int **p);

int main(void) {
  int n;
  printf("How many samples to read: ");
  scanf("%d", &n);

  // int arr[n]; // not a good way to do it

  printf("Size of int is %ld\n", sizeof(int));
  int *arr = malloc(sizeof(int) * n);

  // Not correct since getting size of pointer not size of array
  printf("Size of arr is %ld\n", sizeof(arr));
  // will always be 8 no matter the size of the array

  // will return null pointer if mallock couldn't allocate enough memory
  // NULL == 0 but is more clear could also be written as if (!arr) {
  if (arr == NULL) {
    printf("Not enough memory :(\n");
    return 1;
  }

  int i;
  for (i = 0; i < n; i++) {
    printf("Enter sample %d:", i + 1);
    scanf("%d", &(arr[i]));
  }

  int sum = 0;
  while (i > 0) {
    sum += arr[i - 1];
    i--;
  }

  printf("arr = %p\n", (void *)arr);
  myFree(&arr);
  printf("arr = %p\n", (void *)arr);

  printf("The sum is %d\n", sum);

  return 0;
}

// have to use double pointer so that we can edit the pointer itself
void myFree(int **p) {
  free(*p);
  *p = NULL;
}
