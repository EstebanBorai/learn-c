#include <stdio.h>
#include <math.h>

int main() {
  double input;

  puts("Enter a number to round it to the nearest integer: ");
  puts("Enter Ctrl+D (Unix) / Ctrl+Z (Windows) to stop.");

  while ((input = getdouble() != EOF)) {
    printf("Input: %.2f\tOutput: %.2f\n", input, floor(input + .5));
  } 
}
