#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz program, który wczytuje ze standardowego wejścia liczbę wymierną
// i wypisuje ją na standardowym wyjściu z dokładnością
// do dwóch miejsc po przecinku

int main()
{

    float x;

    scanf("%f", &x);
    printf("%.2f\n", x);

    return 0;
}

// done