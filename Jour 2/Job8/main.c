#include <stdio.h>
#include <stdlib.h>
#include "array_delete.c"

int main() {
    int *array = malloc(5 * sizeof(int));
    if (array == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        array[i] = i * 10;
        printf("%d\n", array[i]);
    }

    array_delete(array);
    return 0;
}
