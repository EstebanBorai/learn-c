#include <stdio.h>

int main() {
  int num;

  puts("Enter an integer: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    puts("\nIs Even");
  } else {
    puts("\nIs Odd");
  }
}
