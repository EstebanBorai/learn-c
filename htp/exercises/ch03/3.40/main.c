#include <stdio.h>

int main() {
  int i = 0, num = 0;

  while(i < 1) {
    if (num % 2 == 0) {
      printf("%d is multiple of 2\n", num);
    }

    num++;
  }
}
