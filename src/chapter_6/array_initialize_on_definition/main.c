#include <stdio.h>

int main() {
    int numbers[10] = { 128, 200, 35, 99, 100, 1, 0, 77, 86 };

    printf("%s%13s\n", "Index", "Value");

    for (int i = 0; i < 10; i++) {
        printf("%7u%13d\n", i, numbers[i]);
    }
}
