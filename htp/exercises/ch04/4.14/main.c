#include <stdio.h>

unsigned int factorial(n) {
  int total = 0;
  for (int i = n; i >= 0; i--) {
    total += (n * (n - 1));
  }

  return total;
}

int main() {
  printf("Factorial of 5 is: %u\n", factorial(5));
}
