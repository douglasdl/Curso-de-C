#include <stdio.h>

int main(void) {
    
    // Overflow (Transbordamento)
    //short x = 2147483647;
    int x = 2147483647; // Limite max int
    
    // Underflow (Transbordamento)
    //short y = -2147483648;
    int y = -2147483648;    // Limite min int

    printf("%i\n", x);
    printf("%i\n", y);
}