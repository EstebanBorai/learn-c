#include <stdio.h>
#include <string.h>

void read_name_and_age_into(char* name_dest, int* age_dest) {
    char name[256];

    printf("Ingrese nombre: ");
    scanf("%s", name);

    printf("Ingrese edad: ");
    scanf("%d", age_dest);

    strcpy(name_dest, name);
}

int main() {
    char name[256];
    int age;

    read_name_and_age_into(name, &age);

    printf("\n\nNombre: %s\nEdad: %d\n\n", name, age);
}
