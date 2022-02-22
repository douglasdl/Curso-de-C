#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file;
    file = fopen("string.txt", "a");

    if(file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        getchar();
        exit(0);
    }
    
    fprintf(file, "Primeira linha\n");

    char frase[] = "Segunda linha\n";
    fputs(frase, file);

    char caractere = '3';
    fputc(caractere, file);

    fclose(file);
    
    system("pause");
    return 0;
}

// gcc aula84.c -o aula84
// ./aula84