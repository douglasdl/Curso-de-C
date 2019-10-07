#include <stdio.h>

int main(void) {
    
    int vetor[3] = {1, 2, 3};
    int *ponteiro = vetor;
    
    //printf("Valor: %i\n", *ponteiro);
    //printf("Endereco: %p\n", ponteiro); // Endereco de memoria tem que usar %p


    /** Metodo 1 
    ponteiro = &vetor[0];
    printf("Endereco: %p\n", ponteiro);

    ponteiro = &vetor[1];
    printf("Endereco: %p\n", ponteiro);
    
    ponteiro = &vetor[2];
    printf("Endereco: %p\n", ponteiro);
    */


    /** Metodo 2 
    ponteiro = &vetor[0];
    printf("Valor 1: %i\n", *ponteiro);

    ++ponteiro;
    printf("Valor 2: %i\n", *ponteiro);
    
    ++ponteiro;
    printf("Valor 3: %i\n", *ponteiro);
    */

    /** Metodo 2 */
    printf("vetor[1]: %i\n", vetor[1]);
    *(ponteiro + 1) = 10;
    printf("vetor[1]: %i\n", vetor[1]);


}