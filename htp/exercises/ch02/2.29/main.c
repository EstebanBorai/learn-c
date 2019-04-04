#include <stdio.h>

int main() {
  char c;

  puts("Enter a character: ");
  scanf("%c", &c);

  printf("\"%c\" integer is: %d\n", c, c);
}
