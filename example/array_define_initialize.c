#include <stdio.h>

int main() {
    // El int numbers[10] es equivalente a hacer
    // int numbers[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    // Indices:            0  1  2  3  4  5  6  7  8  9
    //
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }

    // Al llegar a esta linea, nuestra array
    // va a tener el siguiente valor
    // int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%s%13s\n", "Index", "Value");

    for (int i = 0; i < 10; i++) {
        printf("%7u%13d\n", i, numbers[i]);
    }
}
