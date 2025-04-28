#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która oblicza rezystancje zastępczą
// dwóch połączonych równolegle rezystorów, rezystancje mają być podawane z klawiatury.

float rez_zas(float R1, float R2)
{
    if (R1 <= 0 || R2 <= 0)
    {
        printf("Rezystancja nie może być 0 ani mniejsza niż 0, dawaj jeszcze raz\n");
        exit(1);
    }

    return (1 / (1 / R1 + 1 / R2));
}

int main()
{
    float R1, R2, Rz;

    printf("Podaj rezystancję R1 (om): ");
    scanf("%f", &R1);

    printf("Podaj rezystancję R2 (om): ");
    scanf("%f", &R2);

    Rz = rez_zas(R1, R2);
    printf("Rezystancja zastępcza to: %.2f (om)\n", Rz);

    return 0;
}