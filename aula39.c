#include <stdio.h>

int main() {
    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    
    return 0;
}

// gcc aula39.c -o aula39
// ./aula39