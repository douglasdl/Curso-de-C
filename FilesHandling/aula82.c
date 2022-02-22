#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file;
    file = fopen("numero.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(0);
    }
    int x, y, z;
    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i", x, y, z);

    fclose(file);
    
    //system("pause");
    return 0;
}

// gcc aula82.c -o aula82
// ./aula82