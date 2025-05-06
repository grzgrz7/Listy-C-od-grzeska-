#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz program, który wczytuje ze standardowego wejścia trzy
// liczby całkowite i wypisuje na standardowym wyjściu ich średnią arytmetyczną

int main()
{

    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    float sum = x + y + z;
    float avg = sum / 3.0;

    printf("%f\n", avg);

    return 0;
}
// done