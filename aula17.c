#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite 2 números inteiros:\n");
    scanf("%i %i", &num1, &num2);

    if(num2 == 0)
        printf("Não é possível dividir por 0.\n");
    else {
        if(num1 % num2 == 0) {
            printf("%i é divisível por %i.\n", num1, num2);
        } else {
            printf("%i não é divisível por %i.\n", num1, num2);
        }
    }
    
    return 0;
}

// gcc aula17.c -o aula17
// ./aula17