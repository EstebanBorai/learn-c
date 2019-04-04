#include <stdio.h>

int first(int num) {
  while (num >= 10) {
    num /= 10;
  }

  return num;
}

int second(int num) {
  while (num >= 100) {
    num /= 10;
  }
  
  return num % 10;
}

int third(int num) {
  while(num >= 1000) {
    num /= 10;
  }

  return num % 10;
}

int fourth(int num) {
  while (num >= 10000) {
    num /= 10;
  }

  return num % 10;
}

int fifth(int num) {
  while (num >= 100000) {
    num /= 10;
  }

  return num % 10;
}

int main() {
  int number;

  printf("Enter a five digit number: ");
  scanf("%d", &number);

  printf("%d %d %d %d %d\n", 
    first(number), second(number), third(number), fourth(number), fifth(number)
  );
}
