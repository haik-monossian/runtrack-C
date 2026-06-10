#include "str_to.c"
#include <stdio.h>

int main() {
    char str1[] = "Hello World!";
    char str2[] = "Hello World!";
    char str3[] = "Hello World!";

    str_to_lower(str1);
    printf("to_lower    : %s\n", str1);

    str_to_upper(str2);
    printf("to_upper    : %s\n", str2);

    str_switch_case(str3);
    printf("switch_case : %s\n", str3);

    return 0;
}
