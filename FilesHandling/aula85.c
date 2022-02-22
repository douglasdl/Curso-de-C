#include <stdio.h>
#include <stdlib.h>

int main(void) {

    void copiarConteudo(FILE *file1, FILE *file2);

    FILE *file1 = fopen("arquivo1.txt", "r");
    if(file1 == NULL) {
        printf("Erro ao abrir o arquivo\n");
        getchar();
        exit(0);
    }

    FILE *file2 = fopen("arquivo2.txt", "w");
    if(file2 == NULL) {
        printf("Erro ao abrir o arquivo\n");
        getchar();
        exit(0);
    }

    copiarConteudo(file1, file2);

    fclose(file1);
    fclose(file2);
    
    return 0;
}


void copiarConteudo(FILE *file1, FILE *file2) {
    char leitor[1000];

    while(fgets(leitor, 1000, file1) != NULL) {
        fputs(leitor, file2);
    }
}

// gcc aula85.c -o aula85
// ./aula85