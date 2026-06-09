#include "array_clone.c"
#include <stdio.h>

int main(){
    int array[]= {2,3,4,5};
    int* p = array;

    int* r = array_clone(p, 7);
    int i = 0;
    while (i<4){
        printf("Liste : %d\n", r[i+1]);
        i++;
    }

}