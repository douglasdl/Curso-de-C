#include <stdio.h>

int main(void) {

    int tamanhoString(char string[]);
    char stringUsuario[20];

    printf("Digite uma string: \n");
    scanf("%s", stringUsuario);

    int num = tamanhoString(stringUsuario);
    printf("O tamanho da string %s eh: %i\n", stringUsuario, num);
    
    //system("pause");
    return 0;
}


int tamanhoString(char string[]) {
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0') {
        numCaracteres++;
    }
    numCaracteres++;

    return numCaracteres;
}


// gcc aula49.c -o aula49
// ./aula49