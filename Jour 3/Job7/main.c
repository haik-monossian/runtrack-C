#include <stdio.h>
#include "factorial.c"

int main(){

    printf("%i\n", factorial(4));
    printf("%i\n", factorial(0));
    printf("%i\n", factorial(10));

    return 0;
}