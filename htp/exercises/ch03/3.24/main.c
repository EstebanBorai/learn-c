#include <stdio.h>

int main() {
  printf("N\t10*N\t100*N\t10000*N\n");
  puts("");
  for (int i = 1; i <= 10; i++) {
    printf("%d\t%d\t%d\t%d\n", i, (10 * i), (100 * i), (10000 * i));
  }
}
