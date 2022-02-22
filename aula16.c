#include <stdio.h>

int main() {
    int i;

    printf("Digite um número inteiro de 1 a 5:\n");
    scanf("%i", &i);

    switch (i) {
        case 1:
            printf("Primeiro.\n");
            break;
        case 2:
            printf("Segundo.\n");
            break;
        case 3:
            printf("Terceiro.\n");
        case 4:
            printf("Quarto.\n");
            break;
        case 5:
            printf("Quinto.\n");
            break;
        default:
            printf("Número inválido.\n");
            break;
    }
    
    
    
    return 0;
}

// gcc aula16.c -o aula16
// ./aula16