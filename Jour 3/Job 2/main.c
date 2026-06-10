#include "to.c"
#include <stdio.h>


int main(){
    printf("%c",to_lower('A'));
    printf("%c",to_lower('a'));

    printf("%c",to_upper('a'));
    printf("%c",to_upper('A'));

    printf("%c",switch_case('A'));
    printf("%c",switch_case('b'));
    printf("%c",switch_case('3'));
}