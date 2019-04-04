#include <stdio.h>

int main(void) {
  int num;
  int num1;

  puts("Enter an integer: ");
  scanf("%d", &num);

  puts("Enter a second integer: ");
  scanf("%d", &num1);

  puts("Operations: ");
  printf("%d + %d = %d\n", num, num1, (num + num1));
  printf("%d - %d = %d\n", num, num1, (num - num1));
  printf("%d * %d = %d\n", num, num1, (num * num1));
  printf("%d / %d = %d\n", num, num1, (num / num1));
  printf("%d %% %d = %d\n", num, num1, (num + num1));
}