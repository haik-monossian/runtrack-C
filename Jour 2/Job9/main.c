#include <stdio.h>
#include <stdlib.h>
#include "my_strdup.c"

int main() {
    char original[] = "Hello World!";
    char *copy = my_strdup(original);
    
    if (copy != NULL) {
        printf("Original : %s\n", original);
        printf("Copie    : %s\n", copy);
        printf("Adresse Original : %p\n", (void*)original);
        printf("Adresse Copie    : %p\n", (void*)copy);
        free(copy);
    }
    
    return 0;
}
