#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if (idade <= 5) 
        printf("Bebe.\n");
    else if(idade  > 5 && idade <= 10) 
        printf("Crianca.\n");
    else if(idade  > 10 && idade <= 18) 
        printf("Adolescente.\n");
    else if(idade  > 18 && idade <= 50) 
        printf("Adulto.\n");
    else 
        printf("Idoso.\n");
    
    return 0;
}

// gcc aula15.c -o aula15
// ./aula15