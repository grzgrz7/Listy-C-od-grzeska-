#include <stdio.h>

// Napisz makro, które oblicza przyspieszenie pojazdu,
// który w czasie t zwiększa prędkość z V1 do V2 (t, V1 i V2  podawane są z klawiatury).

#define ACC(v1, v2, t) ((v2 - v1) / t)

int main()
{

    float v1, v2, t, a;

    printf("Podaj predkosc poczatkowa (m/s): ");
    scanf("%f", &v1);

    printf("Podaj predkosc koncowa (m/s): ");
    scanf("%f", &v2);

    printf("Podaj czas przyspieszenia (s): ");
    scanf("%f", &t);

    if (t != 0)
    {
        a = ACC(v1, v2, t);
    }
    else
    {
        printf("Czas przyspieszenia nie może być 0");
    }

    printf("Przyspieszenie to %5.2f (m/s^2)\n", a);

    return 0;
}