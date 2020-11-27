#include <stdio.h>

int main() {
    char nom1[20];
    char nom2[20];
    char nom3[20];

    int num1;
    int num2;
    int num3;

    char mejor_nota_nombre[20];
    int mejor_nota_calificacion;

    puts("Ingrese su nombre y su calificacion: ");
    scanf("%s %d", nom1, &num1);
    scanf("%s %d", nom2, &num2);
    scanf("%s %d", nom3, &num3);

    // primero supones que numero 1 tiene la
    // mejor nota
    if (num1 > num2 && num1 > num3) {
     printf("%s tiene la mejor calificación con %d puntos", nom1, num1);
    }

    //supones que numero 2 tiene la mejor nota
    if (num2 > num1 && num2 >num3) {
        printf("%s tiene la mejor calificación con %d puntos", nom2, num2);
    }

    //supones que el tercero tiene la calificacion mas baja
    if (num3 < num1 && num2) {
        printf("%s tiene la menor calificación con %d puntos", nom3, num3);
    }
}
