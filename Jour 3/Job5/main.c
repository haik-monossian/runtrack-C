#include "sanitize.c"
#include <stdio.h>

int main() {
    char text[] = "Hello\nWorld\t!\x01";

    printf("Avant : %s\n", "Hello\\nWorld\\t!\\x01");
    
    str_sanitize(text);
    
    printf("Après : %s\n", text);

    return 0;
}
