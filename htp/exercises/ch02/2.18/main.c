#include <stdio.h>

int main(void) {
  int num;
  int num1;

  puts("Enter a digit: ");
  scanf("%d", &num);

  puts("Enter a second digit: ");
  scanf("%d", &num1);

  if (num > num1) {
    printf("%d is larger\n", num);
  }

  if (num1 > num) {
    printf("%d is larger\n", num1);
  }
}
