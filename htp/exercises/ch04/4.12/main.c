#include <stdio.h>

int main() {
  unsigned int total = 0;

  for (int i = 2; i <= 30; i++) {
    if (i % 2 == 0) {
      total += i;
    }
  }

  printf("Total is: %u\n", total);
}
