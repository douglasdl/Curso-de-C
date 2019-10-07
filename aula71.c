#include <stdio.h>

int main(void) {
    //int x = 10;
    //int *ponteiro = &x;

    //float x = 10;
    //float *ponteiro = &x;

    /** Metodo 1 
    int vetor[3] = {1, 2, 3};
    int *ponteiro = vetor;
    
    printf("%i\n", *ponteiro);
    */

    /** Metodo 2 */
    int vetor[3] = {1, 2, 3};
    int *ponteiro = &vetor[0];
    
    printf("%i\n", *ponteiro);
    
}