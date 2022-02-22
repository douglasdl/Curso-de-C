#include <stdio.h>

int main() {
    // Fatorial
    int fatorial = 10;
    int resposta = 1;

    for( ; fatorial >= 1; fatorial--) {
        resposta *= fatorial;
    }
    
    printf("%i\n", resposta);
    

    
    return 0;
}

// gcc aula12.c -o aula12
// ./aula12