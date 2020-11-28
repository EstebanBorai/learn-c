#include <stdio.h>

int main() {
    // Array de caracteres (String)
    char hello_world[11] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };

    printf("%s\n", hello_world);

    // Dejo espacio intermedio
    puts("\n=================\n");

    // Array de Strings (Array de caracteres)
    char hellow_world_arr[2][10] = { {  'h', 'e', 'l', 'l', 'o' },  { 'w', 'o', 'r', 'l', 'd' } };

    printf("%s\n", hellow_world_arr[0]);
    printf("%s\n", hellow_world_arr[1]);
}
