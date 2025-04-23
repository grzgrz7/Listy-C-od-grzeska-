#include <stdio.h>
#include <stdlib.h>

// Napisz makro, które oblicza rezystancje zastępczą
// dwóch połączonych równolegle rezystorów,
// rezystancje mają być podawane z klawiatury.

#define Rz(R1, R2) (1 / ((1 / R1) + (1 / R2)))

int main()
{

    float R1, R2, Rz;

    printf("Podaj wartosc rezystancji R1 (om): ");
    scanf("%f", &R1);

    printf("Podaj wartosc rezystancji R2 (om): ");
    scanf("%f", &R2);

    Rz = Rz(R1, R2);
    printf("%5.2f\n", Rz);

    return 0;
}