#include <stdio.h>
#include <string.h>
#include "binary.h"

char * binary(int decimal) {
  char bin[32];
  char binString[32];
  int i = 0, a = 0;

  while (decimal > 0) {
    bin[i] = decimal % 2 + '0';
    decimal = decimal / 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    binString[a] = bin[j];
    a++;
  }

  char result[32];
  strcpy(result, binString);

  return result;
}
