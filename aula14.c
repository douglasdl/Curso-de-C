#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Bebidas alcoolicas nao estao liberadas.\n");
    } else
        printf("Bebidas alcoolicas estao liberadas.\n");
    
    
    return 0;
}

// gcc aula14.c -o aula14
// ./aula14