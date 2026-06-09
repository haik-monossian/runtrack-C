#include <unistd.h>
#include "..\Job02\my_putstr.c"

int my_strlen(char* str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}