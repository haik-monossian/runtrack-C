#include <stdio.h>

bool char_is_digit(char c){
    if (c >= 48 && c <= 57){
        return 1;
    }
    else{
        return 0;
    }
}