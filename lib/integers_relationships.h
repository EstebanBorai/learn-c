#include <stdio.h>
#include <stdbool.h>

bool ints_are_equal(int num1, int num2) {
  return num1 == num2;
}

int ints_greather(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  }

  return num2;
}
