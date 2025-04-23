#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba 0.
// Obliczyć sumę wczytanych liczb.

int main()
{

    float x;
    float sum;

    do
    {
        printf("Podaj Liczbę (0 kończy program): ");
        scanf("%f", &x);

        sum += x; // lub "sum = sum + x;"

    } while (x != 0);

    printf("Suma Wszystkich Liczb: %5.2f\n", sum);

    return 0;
}