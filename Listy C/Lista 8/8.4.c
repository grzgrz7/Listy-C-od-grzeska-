#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która dla czterech otrzymanych w argumentach liczb zwraca ich iloczyn

float mnozenie(float a, float b, float c, float d)
{
    return a * b * c * d;
}

int main()
{

    float a, b, c, d, wynik;

    printf("Podaj liczbę a: ");
    scanf("%f", &a);

    printf("Podaj liczbę b: ");
    scanf("%f", &b);

    printf("Podaj liczbę c: ");
    scanf("%f", &c);

    printf("Podaj liczbę d: ");
    scanf("%f", &d);

    wynik = mnozenie(a, b, c, d);
    printf("Wynik to %5.2f\n", wynik);

    return 0;
}