#include <stdio.h>

int main(void) {

    char linha[100];
    char caractere;
    int i = 0;

    do {
        caractere = getchar();
        linha[i] = caractere;
        i++;
    } while(caractere != '\n');

    linha[i - 1] = '\0';

    printf("%s\n", linha);


    
    //system("pause");
    return 0;
}

// gcc aula53.c -o aula53
// ./aula53