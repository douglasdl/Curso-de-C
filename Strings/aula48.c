#include <stdio.h>

int main(void) {
    
    //char palavra[6] = {'B', 'r', 'a', 's', 'i', 'l'};
    //char palavra[] = {'B', 'r', 'a', 's', 'i', 'l'};
    //char palavra[7] = {"Brasil"}; // \0
    //char palavra[] = {"Brasil"};  // \0
    char palavra[] = "Brasil";   // \0

    printf("%s\n", palavra);

    //system("pause");
    return 0;
}

// gcc aula48.c -o aula48
// ./aula48