#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int promptInteger(char* message) {
  int input;

  printf("%s", message);
  scanf("%d", &input);

  return input;
}

int intLength(int number) {
  return log10(number) + 1;
}

int* intToArray(int number) {
  // Gets size of number
  int size = intLength(number);

  // Creates an char array pointer of the size
  // of "size"
  int* arr = calloc(size, sizeof(int));

  // save each digit inside the array
  for (int i = 0; i < size; i++) {
    arr[i] = number % 10;
    number /= 10;
  }

  // return the array
  return arr;
}

int main() {
  int a, equals = 0;

  a = promptInteger("Enter a number: ");
  int numberSize = intLength(a);

  int* base[5];
  strcpy(base, intToArray(a));

  for (int i = 0; i < numberSize; i++) {
    if (base[i] == base[numberSize - i]) {
      continue;
    } else {
      printf("%d is not palindrome\n", a);
      break;
    }
  }
}
