#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz program wyznaczający największą z czterech liczb podanych przez użytkownika.

int main()
{

    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float max = 0;

    if (a > max)
    {
        max = a;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    printf("największy numer to: %5.2f\n", max);

    return 0;
}