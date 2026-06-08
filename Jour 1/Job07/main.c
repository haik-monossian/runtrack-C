#include "my_strcmp.c"
#include <stdio.h>

int main()
{
    printf("abc vs abd : %d\n", my_strcmp("abc", "abd"));
    printf("abd vs abc : %d\n", my_strcmp("abd", "abc"));
    printf("abc vs abc : %d\n", my_strcmp("abc", "abc"));
    printf("ab vs abc : %d\n", my_strcmp("ab", "abc"));
    printf("abc vs ab : %d\n", my_strcmp("abc", "ab"));

    return (0);
}
