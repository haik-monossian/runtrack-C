#include "is.c"
#include <stdio.h>


int main(){
    printf("%i",is_digit('2'));
    printf("%i",is_digit('a'));
    
    printf("%i",is_upper('A'));
    printf("%i",is_upper('a'));

    printf("%i",is_lower('a'));
    printf("%i",is_lower('A'));

    printf("%i",is_print('a'));
    printf("%i",is_print('é'));

    printf("%i",is_alpha('z'));
    printf("%i",is_alpha('Z'));
    printf("%i",is_alpha('4'));
}