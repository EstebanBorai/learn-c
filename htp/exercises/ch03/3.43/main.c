#include <stdio.h>

double scanDouble(char * message) {
  double promptAnswer;
  printf("%s", message);
  scanf("%lf", &promptAnswer);

  return promptAnswer;
}

int main() {
  double a, b, c;

  a = scanDouble("Enter side (1/3) of a triangle: ");
  b = scanDouble("Enter side (2/3) of a triangle: ");
  c = scanDouble("Enter side (3/3) of a triangle: ");

  if (a == b && a == c) {
    puts("This is a triangle.");
  } else {
    puts("This is not a triangle.");
  }
}
