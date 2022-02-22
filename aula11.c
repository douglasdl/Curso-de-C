#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("%i\n", contador);
        contador++;
    }    
    
    return 0;
}

// gcc aula11.c -o aula11
// ./aula11