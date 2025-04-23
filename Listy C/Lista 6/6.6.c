#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba ujemna.
// Obliczyć iloczyn odwrotności wczytanych liczb.

int main()
{

    float x;
    float product = 1;

    do
    {
        printf("Podaj liczbę (ujemna liczba kończy program): ");
        scanf("%f", &x);
        product = product * x;

    } while (x >= 0);

    float inverse_product;

    if (product != 0)
    {
        inverse_product = 1 / product;
        printf("Iloczyn to %5.2f!\n", product);
    }
    else
    {
        printf("Nie istnieje odwrotność 0, durniu >:(\n");
    }

    return 0;
}