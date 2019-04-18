#include <stdio.h>

int main() {
  unsigned int totalItems;
  unsigned int totalSum = 0;

  printf("%s", "Enter number of items to sum: ");
  scanf("%u", &totalItems);

  for (int i = 1; i <= totalItems; i++) {
    int number;

    printf("Enter number to sum (%d/%u): ", i, totalItems);
    scanf("%d", &number);

    totalSum += number;
  }

  printf("Total is: %u\n", totalSum);
}
