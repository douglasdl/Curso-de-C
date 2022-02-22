#include <stdio.h>

int main() {
    int minhaIdade = 34;
    int maeIdade = 55;
    int paiIdade = 58;
    int irmaIdade = 32;

    int idadeTotal = minhaIdade + maeIdade + paiIdade + irmaIdade;

    printf("idade total: %i\n", idadeTotal);
    
    return 0;
}

// gcc aula06.c -o aula06
// ./aula06