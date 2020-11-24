#include <stdio.h>

int main() {
    int edad_de_david;
    char nombre_del_usuario[20];

    printf("Cómo te llamas?");
    scanf("%20s", nombre_del_usuario);

    printf("Cúantos años tienes?");
    scanf("%d", &edad_de_david);

    printf("Hola me llamo %s y tengo %d años", nombre_del_usuario, edad_de_david);
}