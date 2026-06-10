#include <stdio.h>
#include "fibonacci.c"

int main() {
    printf("Comparison between fibonacci_it and fibonacci_rec:\n");
    printf("%-5s | %-12s | %-12s\n", "n", "Iterative", "Recursive");
    printf("------|--------------|--------------\n");
    
    for (int i = 0; i <= 10; i++) {
        printf("%-5d | %-12d | %-12d\n", i, fibonacci_it(i), fibonacci_rec(i));
    }
    
    return 0;
}
