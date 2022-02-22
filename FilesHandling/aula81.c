#include <stdio.h>

int main(void) {
    FILE *file;
    file = fopen("teste.txt", "w"); // r = read, w = write, a = append, r+ = read and write, w+ = write and append
    fprintf(file, "Hello, world!\n");
    fclose(file);

    return 0;
}

// gcc aula81.c -o aula81
// ./aula81