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

    // Prescedencia de sinais primeiro ponto . depois * , pra mudar precisa colocar os pareteses ()
    //(*depois).hora = 20;
    //(*depois).minuto = 22;
    //(*depois).segundo = 30;

    // Operador de acesso elementos da estrutura
    depois->hora = 20;
    depois->minuto = 22;
    depois->segundo = 30;

    printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);
    
}