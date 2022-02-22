#include <stdio.h>

int main() {
    int numero, cifra;

    printf("Digite 1 números inteiro:\n");
    scanf("%i", &numero);

    if(numero >= 0) {
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while(numero != 0);
    } else if(numero < 1) {
        numero *= -1;
        printf("-");
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while(numero != 0);
    }
    
    return 0;
}

// gcc aula18.c -o aula18
// ./aula18