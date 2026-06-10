#include <stdio.h>
#include "sort.c"

int main() {
    int array[] = {5, 2, 9, 1, 5, 6, 0};
    int *sorted = sort(array);

    int i = 0;
    while (sorted[i] != 0) {
        printf("%d ", sorted[i]);
        i++;
    }
    printf("\n");
    return 0;
}
