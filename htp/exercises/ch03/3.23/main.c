#include <stdio.h>

int main() {
  unsigned int counter = 1;
  int largest = 0;
  int number;

  while (counter <= 10) {
    printf("Enter a number(%d/10): ", counter);
    scanf("%d", &number);

    if (number < 0) {
      number = (number * -1);
    }

    if (number > largest) {
      largest = number;
    }

    counter++;
  }

  printf("The largest number is: %d\n", largest);
}
