#include <stdio.h>
#include <stdbool.h>

bool isMultiple(int a, int b) {
  if (a % b == 0) {
    return true;
  }

  return false;
}

int main() {
  int num, num1;

  puts("Enter 2 integers, followed by an space: ");
  scanf("%d %d", &num, &num1);

  if (isMultiple(num, num1)) {
    printf("%d is multiple of %d\n", num, num1);
  } else {
    printf("%d is not multiple of %d\n", num, num1);
  }
}
