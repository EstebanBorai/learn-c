#include <stdio.h>

int main() {
  int num;

  puts("Enter an integer: ");

  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Integer %d is even\n", num);
  } else {
    printf("Integer %d is odd\n", num);
  }
}
