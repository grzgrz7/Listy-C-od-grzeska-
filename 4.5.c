#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz program, który wczytuje ze standardowego wejścia trzy
// liczby rzeczywiste i wypisuje na standardowym wyjściu wypisuje ich sumę


int main() {
    
float x,y,z;

scanf("%f", &x);
scanf("%f", &y);
scanf("%f", &z);

float sum = x+y+z;

printf("%f\n", sum);

    return 0;
}

// done