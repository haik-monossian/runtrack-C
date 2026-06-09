#include <stdio.h>
#include "print_adress.c"

int main() {
    int n = 13 ;
    int* p = &n;
    print_adress(p);
    return (0);
}