#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz funkcję, która oblicza przyspieszenie pojazdu,
// który w czasie t zwiększa prędkość z V1 do V2 (t, V1 i V2  podawane są z klawiatury).

float acceleration(float v1, float v2, float t)
{
    return (v2 - v1) / t;
}

int main()
{
    float v1, v2, t, a;

    printf("Podaj predkosc koncowa v2 (m/s): ");
    scanf("%f", &v2);

    printf("Podaj predkosc poczatkowa v1 (m/s): ");
    scanf("%f", &v1);

    printf("Podaj czas t (s) : ");
    scanf("%f", &t);

    a = acceleration(v1, v2, t);
    printf("Przyspieszenie wynosilo: %.2f (m/s)\n", a);

    return 0;
}