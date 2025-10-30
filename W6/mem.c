#include <stdio.h>
#include <string.h>

struct iii {
  int i1;
  int i2;
  int i3;
};

struct ccc {
  char c1;
  char c2;
  char c3;
};
struct cic {
  char c1;
  int i2;
  char c3;
};
struct icc {
  int i1;
  char c2;
  char c3;
};

union iccu {
  int i1;
  char c2;
  char c3;
};

int main(void) {
  printf("size of int = %ld\n", (long int)sizeof(int));
  printf("size of char = %ld\n", (long int)sizeof(char));

  printf("size of iii = %ld\n", (long int)sizeof(struct iii));
  printf("size of ccc = %ld\n", (long int)sizeof(struct ccc));

  // All the same size even if char is smaller than int
  // unallocated bytes left empty
  printf("size of cic = %ld\n", (long int)sizeof(struct cic));
  printf("size of icc = %ld\n", (long int)sizeof(struct icc));

  struct icc z = {42, 'a', 'b'};
  printf("z.i1: %d, z.c2: %c, z.c3: %c\n", z.i1, z.c2, z.c3);
  printf("&z.i1: %ld, &z.c2: %ld, &z.c3: %ld\n", (long int)&z.i1,
         (long int)&z.c2, (long int)&z.c3);

  union iccu zu;
  zu.i1 = 43;
  zu.c2 = 'c';
  zu.c3 = 'd';

  printf("zu.i1: %d, zu.c2: %c, zu.c3: %c\n", zu.i1, zu.c2, zu.c3);
  printf("&zu.i1: %ld, &zu.c2: %ld, &zu.c3: %ld\n", (long int)&zu.i1,
         (long int)&zu.c2, (long int)&zu.c3);
  // All fields in union refer to same memory so can only be one of the fileds
  // at a time
}
