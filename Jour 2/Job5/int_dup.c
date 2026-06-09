#include <stdlib.h>

int *int_dup(int value){
    int *p = malloc(sizeof(int));
    *p = value;
    return (p);
}