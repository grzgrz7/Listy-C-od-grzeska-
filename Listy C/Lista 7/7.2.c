#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz makro, które dostaje jako argumenty dwie liczby całkowite
// i wypisuje na standardowym wyjściu mniejszą z nich

#define min(a, b) ((a < b) ? a : b)

int main()
{
    int x, y;
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &x);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &y);
    int min = min(x, y);
    printf("Mniejsza liczba to: %d\n", min);
    return 0;
}