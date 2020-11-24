#include <stdio.h>

// Numero matematico Pi (π): 3.14159
const float PI = 3.14159;

// Devuelve el valor al cuadrado
float elevar_al_cuadrado(float base){
    return base * base;
}

// Recibe el radio de un circulo y
// devuelve el diametro
//
// Formula del Diametro:
//
// D = 2R
//
// D: Diametro
// R: Radio
float calcular_diametro(float radio) {
    return radio * 2;
}

// A = π(R^2)
float area(float radio){
    return PI * elevar_al_cuadrado(radio);
}

// C = 2πR
float circunferencia(float radio){
    return 2 * (radio * PI);
}

int main() {
    float radio;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    printf("El diametro del circulo es: %.2fcm\n", calcular_diametro(radio));

    printf("La circunferencia es: %.2fcm\n", circunferencia(radio));

    printf("El area del circulo es: %.2fcm\n", area(radio));
}
