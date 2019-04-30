#include <stdio.h>
#include "binary.h"

int main() {
  puts("Decimal\tBinary\tOctal\tHexadecimal");
  for (int i = 1; i <= 256; i++) {
    if (i < 128) {
      printf("%d\t%s\t\t%o\t%X\n", i, binary(i), i, i);
    } else {
      printf("%d\t%s\t%o\t%X\n", i, binary(i), i, i);
    }
  }
}
