#include <stdio.h>

int main(void) {

    char nome[20];
    char sobrenome[20];

    printf("Digite seu nome e sobrenome: \n");
    scanf("%s%s\n", &nome, &sobrenome);

    printf("%s %s\n", nome, sobrenome);

    
    //system("pause");
    return 0;
}

// gcc aula52.c -o aula52
// ./aula52