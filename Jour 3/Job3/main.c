#include "str.c"
#include <stdio.h>

int main() {
    printf("str_is_digit(\"12345\") : %d\n", str_is_digit("12345"));
    printf("str_is_digit(\"12a45\") : %d\n", str_is_digit("12a45"));
    printf("str_is_alpha(\"abc\")   : %d\n", str_is_alpha("abc"));
    printf("str_is_alpha(\"ab3\")   : %d\n", str_is_alpha("ab3"));
    printf("str_is_print(\"abc123\")   : %d\n", str_is_print("abc123"));
    printf("str_is_print(\"dadzzé\")   : %d\n", str_is_print("dadzzé"));
    return 0;
}