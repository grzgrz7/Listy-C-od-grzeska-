#include <stdio.h>
#include <stdlib.h>

// Napisz makro, które oblicza spadek napięcia na rezystorze R
// przez który przepływa prąd I (R oraz I są podawane z klawiatury)

#define VOL(R, I) (R * I)

int main()
{
    float R, I, U;

    printf("Podaj wartosc pradu (A): ");
    scanf("%f", &I);

    printf("Podaj wartosc rezystancji (Om): ");
    scanf("%f", &R);

    U = VOL(R, I);
    printf("Spadek napiecia na rezystorze to %5.2f\n", U);

    return 0;
}