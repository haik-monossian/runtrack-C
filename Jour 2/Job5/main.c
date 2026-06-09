#include <stdio.h>
#include <stdlib.h>
#include "int_dup.c"

int main() {
    int *ptr = int_dup(42);
    
    printf("Valeur allouee : %d\n", *ptr);
    printf("Adresse memoire : %p\n", (void*)ptr);
    free(ptr);
    return 0;
}
