#include <stdio.h>

int main(void) {
    struct horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora;
    struct horario *depois;
    depois = &agora;

    // Operador de acesso elementos da estrutura
    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio - depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto * depois->segundo;

    printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);
    printf("%i:%i:%i\n", antes.hora, antes.minuto, antes.segundo);
    
}