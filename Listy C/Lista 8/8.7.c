#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która oblicza spadek napięcia na rezystorze R
// przez który przepływa prąd I (R oraz I są podawane z klawiatury)

float napiecie(float R, float I)
{
    return R * I;
}

int main()
{
    float U, R, I;

    printf("Podaj rezystancję (om): ");
    scanf("%f", &R);

    printf("Podaj prąd (amper): ");
    scanf("%f", &I);

    U = napiecie(R, I);
    printf("Spadek napięcia to %.2f (volt)\n", U);

    return 0;
}