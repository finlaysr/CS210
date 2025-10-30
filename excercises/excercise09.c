#include <stdio.h>

int length(char *str);

char *str_rev_and_copy(char *src, char *dest);
char *str_rev(char *src);
char str_cmp(char *str1, char *str2);
char *str_trim(char *src);

int main(void) {
  // Q1
  {
    char s[] = "hello this is some text";
    char rev[100];

    char *returned = str_rev_and_copy(s, rev);
    printf("Reversed in place: %s\n", rev);
    printf("Returned:          %s\n", returned);
  }

  // Q2
  {
    char s[] = "abcde fghi";

    char *returned = str_rev(s);
    printf("Reversed in place: %s\n", s);
    printf("Returned:          %s\n", returned);
  }

  // Q3
  {
    int order = str_cmp("aaab", "aaaa");
    printf("Order: %d\n", order);
  }

  // Q4
  {
    char orig[] = "     \t\t\n Hello, World!\n\n\tGoodbye, World ! \t\n";
    printf("Original: {%s}\n", orig);

    char *returned = str_trim(orig);
    printf("Trimed: {%s}\n", orig);
    printf("Returned: {%s}\n", returned);
  }
}

int length(char *str) {
  int len = 0;
  while (*(str + len) != 0) {
    len += 1;
  }
  return len;
}

char *str_rev_and_copy(char *src, char *dest) {
  int len = length(src);
  for (int i = 0; i < len; i++) {
    *(dest + i) = *(src + len - 1 - i);
  }
  *(dest + len) = 0;

  return dest;
}

char *str_rev(char *str) {
  char buffer;
  int len = length(str);
  for (int i = 0; i < len / 2; i++) {
    buffer = *(str + i);
    *(str + i) = *(str + len - 1 - i); // replace first with last
    *(str + len - 1 - i) = buffer;     // replace last with stored first value
  }
  return str;
}

char str_cmp(char *str1, char *str2) {
  if (*str1 == 0 || *str1 == 0) {
    return 0;
  } else if (*str1 > *str2) {
    return 1;
  } else if (*str1 < *str2) {
    return -1;
  }
  return str_cmp(str1 + 1, str2 + 1);
}

char *str_trim(char *src) {
  int len = length(src);

  // Remove trailing stuff
  int i = len - 1;
  while (i > 0 && ((*(src + i) == ' ') || (*(src + i) == '\n') ||
                   (*(src + i) == '\t'))) {
    i--;
  }
  *(src + i + 1) = 0;
  len = i + 2;

  // Remove leading stuff
  while ((*(src) == ' ') || (*(src) == '\n') || (*(src) == '\t')) {
    len--;
    for (int j = 0; j < len; j++) {
      *(src + j) = *(src + j + 1);
    }
  }

  return src;
}
