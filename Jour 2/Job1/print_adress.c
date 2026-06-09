#include <unistd.h>

// On utilise la récursivité pour afficher les charactères de gauche a droite et pas de droite a gauche
void recursive_invert_number(unsigned long long adr){
    if (adr >= 16) {
        recursive_invert_number(adr / 16);
    }

    int reste = adr % 16;

    char c;
    if (reste > 9){
        c = reste + 87;
    } else { 
        c = reste + 48;
    }
    write(1, &c, 1);
}

void print_adress(int *n){
    unsigned long long adr = (unsigned long long)n;

    recursive_invert_number(adr);
}