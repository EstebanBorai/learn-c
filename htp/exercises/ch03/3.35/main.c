#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int intLength(int number) {
  return floor(log10(abs(number))) + 1;
}

int main() {
  int binaryEquivalent[5] = { 1, 2, 4, 8, 16 };
  int num, decimalNumber = 0, remainder, inputSize;
  char str[12];

  printf("Enter a 5 digit binary: ");
  scanf("%d", &num);

  sprintf(str, "%d", num);
  inputSize = intLength(num);

  if (inputSize > 5) {
    printf("%d is too big for this program. Use a 5 digit number. Received %d digits number\n",
      num, inputSize);
  } else {
    for (int i = 0; i < inputSize; i++) {
      remainder = num % 10;
      
      if (remainder != 0) {
        decimalNumber += binaryEquivalent[i];
      }
      num /= 10;
    }

    printf("Decimal version of %s is %d\n", str, decimalNumber);
  }
}
