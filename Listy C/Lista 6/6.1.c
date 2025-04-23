#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba 0.
// Określić najmniejszą wczytywaną liczbę.

int main()
{
    float x;
    float min;

    do
    {
        printf("Podaj liczbę: \n");
        scanf("%f", &x);

        if (x < min)
        {
            min = x;
        }
    } while (x != 0);

    printf("Najmniejsza liczba to %5.2f\n", min);

    return 0;
}