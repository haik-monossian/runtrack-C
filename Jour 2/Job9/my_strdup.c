#include <stdlib.h>

char *my_strdup(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char *dest = malloc((len + 1) * sizeof(char));
    if (dest == NULL) {
        return NULL;
    }
    int i = 0;
    while (str[i] != '\0') {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
