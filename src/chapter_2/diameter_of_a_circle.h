#include <stdio.h>

// Numero matematico Pi (π): 3.14159
const float CIRCLE_PI = 3.14159;

// Devuelve el valor al cuadrado
float circle_pow(float base){
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
float circle_calc_diameter(float radio) {
    return radio * 2;
}

// A = π(R^2)
float circle_calc_area(float radio){
    return CIRCLE_PI * circle_pow(radio);
}

// C = 2πR
float circle_calc_circumference(float radio){
    return 2 * (radio * PI);
}
