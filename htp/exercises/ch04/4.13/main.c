#include <stdio.h>

int main() {
  int flag = 1;
  unsigned int total = 1;

  // just because I never use loops,
  // and wanted to use a do/while
  do {
    if (flag % 2 != 0) {
      total *= flag;
    }
    flag++;

  } while (flag <= 15);

  printf("Total is: %u\n", total);
}
