#include <stdio.h>

int main() {
    int numbers[10] = { 128, 200, 35, 99, 100, 1, 0, 77 };

    printf("%s%13s\n", "Index", "Value");

    printf("0: %13d\n", numbers[0]);
    printf("1: %13d\n", numbers[1]);
    printf("2: %13d\n", numbers[2]);
    printf("3: %13d\n", numbers[3]);
    printf("4: %13d\n", numbers[4]);
    printf("5: %13d\n", numbers[5]);
    printf("6: %13d\n", numbers[6]);
    printf("7: %13d\n", numbers[7]);
}
