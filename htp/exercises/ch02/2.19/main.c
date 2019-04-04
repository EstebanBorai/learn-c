#include <stdio.h>

int sum(int a, int b, int c) {
  return (a + b) + c;
}

int average(int a, int b, int c) {
  return sum(a, b, c) / 3;
}

int product(int a, int b, int c) {
  return (a * b) * c;
}

int min(int a, int b, int c) {
  int min = a < b ? a : b;
  return min < c ? min : c;
}

int max(int a, int b, int c) {
  int max = a > b ? a : b;
  return max > c ? max : c;
}

int main() {
  int num, num1, num2;

  puts("Enter 3 integers, followed by an space: ");
  scanf("%d %d %d", &num, &num1, &num2);

  printf("Sum is %d\n", sum(num, num1, num2));
  printf("Average is %d\n", average(num, num1, num2));
  printf("Product is %d\n", product(num, num1, num2));
  printf("Smallest is %d\n", min(num, num1, num2));
  printf("Largest is %d\n", max(num, num1, num2));
}
