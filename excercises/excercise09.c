#include <stdio.h>

int length(char *str);

char *str_rev_and_copy(char *src, char *dest);
char *rev_char(char *src);
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

    char *returned = rev_char(s);
    printf("Reversed in place: %s\n", s);
    printf("Returned:          %s\n", returned);
  }

  // Q3
  {
    int order = str_cmp("aaaa", "aaab");
    printf("Order: %d\n", order);
  }

  // Q4
  {
    char orig[] = "     \t\t\n Hello, World!\n\n\tGoodbye, World ! \t\n";
    printf("Original (%ld): {%s}\n", orig, orig);

    char *returned = str_trim(orig);
    printf("Trimed (%ld): {%s}\n", orig, orig);
    printf("Returned (%ld): {%s}\n", returned, returned);
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

char *rev_char(char *str) {
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
  int order = 0;
  int len = length(str1);
  int i = 0;
  while (order == 0 && i < len) {
    if (*(str1 + i) > *(str2 + i)) {
      order = 1;
    } else if (*(str1 + i) < *(str2 + i)) {
      order = -1;
    }
    i++;
  }
  return order;
}

char *str_trim(char *src) {
  char rem[] = {' ', '\n', '\t'};

  int len = length(src);
  int i = 0;

  while (i < len && ((*(src + i) == ' ') || (*(src + i) == '\n') ||
                     (*(src + i) == '\t'))) {
    src++;
  }

  return src;
}
