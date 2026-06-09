#include <stdio.h>
#include "swap.c"

int main() {
    int n = 13 ;
    int e = 43 ;
    int* p = &n;
    int* f = &e;
    swap(p, f);
    printf("n = %d, e = %d\n", n, e); 
    return (0);
}