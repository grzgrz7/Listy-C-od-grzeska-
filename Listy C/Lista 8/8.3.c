#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która zwraca wartość bezwzględna podawanej w argumencie liczby

float absolutny(float a)
{
    if (a < 0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}

int main()
{
    float a;
    printf("Podaj a: ");
    scanf("%f", &a);

    a = absolutny(a);
    printf("Wynik to: %5.2f\n", a);

    return 0;
}