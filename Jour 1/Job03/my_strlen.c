#include <stdio.h>

int my_strlen(char* str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    printf("%i\n", i); 
    return i;
}