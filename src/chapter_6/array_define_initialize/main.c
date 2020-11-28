#include <stdio.h>

int main() {
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }

    printf("%s%13s\n", "Index", "Value");

    for (int i = 0; i < 10; i++) {
        printf("%7u%13d\n", i, numbers[i]);
    }
}
