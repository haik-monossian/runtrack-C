#include "my_strcpy.c"
#include <stdio.h>

int main (){
    char dest[10] = "Hello"; 
    char src[] = "Le monde";

    printf("%s\n", my_strcpy(dest, src)); 
    
    return (0);
}
