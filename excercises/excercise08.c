#include <stdio.h>

int str_len(char *str);
void str_cpy(char *src, char *dest);

int main() {
  char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%s is %d characters long!\n", str, str_len(str));

  char str2[100] = "XXXXXXXXXXXXXXXXXXXXXXXXXX   If you're reading this, you "
                   "probably forgot a '\\0'!";

  str_cpy(str, str2);

  printf("Copied from:\t%s\nCopied to:\t%s", str, str2);
}

int str_len(char *str) {
  int n = 0;
  while (*(str + n) != '\0') {
    n++;
  }
  return n;
}

void str_cpy(char *src, char *dest) {
  int n = 0;
  while (*(src + n) != '\0') {
    *(dest + n) = *(src + n);
    n++;
  }
  *(dest + n) = '\0';
}
