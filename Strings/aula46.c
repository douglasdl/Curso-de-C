#include <stdio.h>

int main(void) {

    char teste[] = {'B', 'a', 'r', 'r', 'a'};

    int i;
    for (i = 0; i < 5; i++) {
        printf("%c", teste[i]);
    }
    
    //system("pause");
    return 0;
}

// gcc aula46.c -o aula46
// ./aula46