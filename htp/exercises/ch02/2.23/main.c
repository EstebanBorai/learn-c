#include <stdio.h>

int max(int a, int b, int c) {
  int max = a > b ? a : b;
  return max > c ? max : c;
}

int min(int a, int b, int c) {
  int min = a < b ? a : b;
  return min < c ? min : c;
}

int main() {
  int a, b, c;

  puts("Enter 3 integers, followed by an space:" );
  scanf("%d %d %d", &a, &b, &c);

  printf("Largest: %d\n", max(a, b, c));
  printf("Smallest: %d\n", min(a, b, c));
}
