#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int a, b, c, d, e, f, g, h, i, j, largest;

  puts("Enter 10 integers followed by an space: ");
  scanf("%d %d %d %d %d %d %d %d %d %d",
    &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

  largest = max(a, max(b, max(c, max(d, max(e, max(f, max(g, max(h, max(i, j)))))))));
  printf("Largest number is: %d\n", largest);
}
