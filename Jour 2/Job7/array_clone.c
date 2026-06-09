#include <stdlib.h>

int *array_clone(int *arr, int n){
    int* new_array = malloc((n+1) * sizeof(int));
    int i = 0;
    while(i < n && arr[i] != '\0'){
        new_array[i] = arr[i];
        i++;
        
    }
    new_array[i] = '\0';
    return new_array;
}