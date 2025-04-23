#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy napisać program, który pyta się użytkownika o liczbę całkowitą N,
// a następnie oblicza silnię tej liczby.

int main()
{

    int N;
    int i;
    float silnia = 1;

    printf("Podaj Liczbę N: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--)
    {
        silnia = silnia * i;
    }

    printf("Silnia %d to: %5.2f\n", N, silnia);
    return 0;
}