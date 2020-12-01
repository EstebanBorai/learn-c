#include <stdio.h>
#include <string.h>

int main() {
    char names[3][256];

    for (int i = 0; i < 3; i++) {
        char name[256];

        printf("Ingrese el nombre: ");
        scanf("%s", name);

        strcpy(names[i], name);
    }

    puts("\n============================\n");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
}
