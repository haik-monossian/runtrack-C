#include <stdio.h>
#include "increment.c"

int main() {
    int n = 13 ;
    int* p = &n;
    increment(p);
    return (0);
}