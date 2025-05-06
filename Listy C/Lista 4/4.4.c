#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz program, który wczytuje ze standardowego wejścia trzy
// liczby rzeczywiste i wypisuje na standardowym wyjściu ich średnią arytmetyczną

int main()
{

    float x, y, z;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    float sum = x + y + z;
    float avg = sum / 3.0;

    printf("%f\n", avg);

    return 0;
}

// done