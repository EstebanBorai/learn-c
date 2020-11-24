#include <stdio.h>

int main() {
    float a;
    float b;

    printf("Ingrese un numero: ");
    scanf("%f", &a);

    printf("Ingrese un segundo numero: ");
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}
