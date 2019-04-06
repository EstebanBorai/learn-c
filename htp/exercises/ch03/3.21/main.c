#include <stdio.h>

int promptInt(char* message) {
  int input;

  printf("%s: ", message);
  scanf("%d", &input);

  return input;
}

int main() {
  int option;
  int number;

  option = promptInt("Enter 1 for Postcrementing and 2 for Precrementing");
  number = promptInt("Enter a number to evaluate");

  if (option == 1 || option == 2) {
    for (int i = 1; i <= 10; i++) {
      if (option == 1) {
        printf("Lap: %d\tValue: %d\n", i, number++);
      } else {
        printf("Lap: %d\tValue: %d\n", i, ++number);
      }
    }
  } else {
    printf("%d is not a valid option", option);
  }
}
