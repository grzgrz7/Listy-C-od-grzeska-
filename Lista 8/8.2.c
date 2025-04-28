#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która dostaje jako argumenty dwie liczby całkowite
// i wypisuje na standardowym wyjściu mniejszą z nich

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int a, b, c;
    printf("Podaj liczbę a: ");
    scanf("%d", &a);

    printf("Podaj liczbę b: ");
    scanf("%d", &b);

    c = min(a, b);

    printf("Mniejsza z nich to: %d\n", c);

    return 0;
}