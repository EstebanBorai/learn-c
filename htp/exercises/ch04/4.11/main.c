#include <stdio.h>

int readInteger(char* message, int position, unsigned int maxItems) {
  int input;
  printf("%s (%d/%d): ", message, position, maxItems);
  scanf("%d", &input);

  return input;
}

int findMin(int base, int new) {
  if (base > new) {
    return new;
  } else {
    return base;
  }
}

int main() {
  unsigned int maxIntegers;
  int min, input;

  puts("Find the smallest integer.");

  printf("Enter a number: ");
  scanf("%d", &maxIntegers);

  for (int i = 1; i <= maxIntegers; i++) {
    input = readInteger("Enter an integer", i, maxIntegers);

    if (i == 1) {
      // if this is the first iteration,
      // assign current input o minimum value
      // and skip findMin execution
      min = input;
      continue;
    }

    min = findMin(min, input);
  }

  printf("Smallest integer is: %d\n", min);
}
