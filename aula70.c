#include <stdio.h>

int main(void) {

    int x = 1;
    int y = 0;

    y = ++x;    // x++ ; y = x
    printf("Pre-incremento. x = %i y = %i.\n", x, y);
    
    x = 1;
    y = 0;

    y = x++;    // y = x ; x++
    printf("Pos-incremento. x = %i y = %i.\n", x, y);
}