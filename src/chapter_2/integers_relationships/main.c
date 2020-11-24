#include <stdio.h>

int main() {
  int num1;
  int num2;

  puts("Enter two integers, use ONE SPACE to separate between them: ");

  scanf("%d %d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d\n", num1, num2);
  }

  if (num1 != num2) {
    printf("%d is not equal to %d\n", num1, num2);
  }

  if (num1 < num2) {
    printf("%d is less than %d\n", num1, num2);
  }

  if (num1 > num2) {
    printf("%d is greather than %d\n", num1, num2);
  }

  if (num1 <= num2) {
    printf("%d is less than or equal to %d\n", num1, num2);
  }

  if (num1 >= num2) {
    printf("%d is greather than or equal to %d\n", num1, num2);
  }
}
