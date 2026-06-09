#include <stdio.h>
#include <stdlib.h>
#include "divide.c"

int main() {
    int number = 42;
    int* n = &number;
    divide(n);
    
    printf("Valeur finale : %d\n", number);
    return 0;
}
