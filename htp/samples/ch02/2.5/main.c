#include <stdio.h>

int main(void)
{
  int integer1;
  int integer2;
  int sum;

  printf("Enter first integer\n");
  scanf("%d", &integer1);
  // The & (address operator) followed by the variable name
  // tells scanf the address in memory

  printf("Enter second integer\n");
  scanf("%d", &integer2);

  sum = integer1 + integer2;

  printf("Sum is %d\n", sum);
}
