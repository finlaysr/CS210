#include <stdio.h>
void print_array(int *ptr, int len);

int main(void) {
  int completely_random_nums[14] = {99, 97,  114, 97,  109, 101, 108,
                                    32, 119, 97,  102, 101, 114, 0};

  print_array(completely_random_nums, 14);
  return 0;
}

void print_array(int *ptr, int len) {
  int i;
  for (i = 0; i < len - 1; i++) {
    printf("%d, ", *(ptr + i));
  }

  printf("%d\n", *(ptr + i));
}
