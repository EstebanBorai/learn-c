#include <stdio.h>

int main() {
  printf("A\tA+2\tA+4\tA+6\n");
  puts("");
  for (int i = 1; i <= 5; i++) {
    int current = (3 * i);
    printf("%d\t%d\t%d\t%d\n", current, (current + 2), (current + 4), (current + 6));
  }
}
