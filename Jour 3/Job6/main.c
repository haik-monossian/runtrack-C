#include "power.c"
#include <stdio.h>

int main() {
    printf("power(2, 3)  : %d\n", power(2, 3));
    printf("power(5, 0)  : %d\n", power(5, 0));
    printf("power(3, 1)  : %d\n", power(3, 1));
    printf("power(10, 4) : %d\n", power(10, 4));
    return 0;
}
