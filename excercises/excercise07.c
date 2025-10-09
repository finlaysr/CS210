#include <stdio.h>
void print_array(int *ptr, int len);

int main(void) {
  int completely_random_nums[14] = {99, 97,  114, 97,  109, 101, 108,
                                    32, 119, 97,  102, 101, 114, 0};

  print_array(completely_random_nums, 14);
  return 0;
}

void print_array(int *ptr, int len) {
  len--;
  while (len--) {
    printf("%d, ", *ptr++);
  }

  printf("%d\n", *(ptr));
}
