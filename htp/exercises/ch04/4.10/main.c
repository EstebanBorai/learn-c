#include <stdio.h>

int main() {
  unsigned int totalItems = 0;
  int numbers = 0;
  int input;

  puts("Enter numbers to calculate average: ");
  puts("Enter Ctrl+D (Unix Systems) /Ctrl+Z (Windows Systems) to end.");

  while ((input = (int) getchar()) != EOF) {
    numbers += input;
    totalItems++;
  }

  printf("\nTotal Average is: %d", (numbers / totalItems));
}
