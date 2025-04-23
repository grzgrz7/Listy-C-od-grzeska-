#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba 0.
// Obliczyć iloczyn wczytanych liczb.

int main()
{

    float x;
    float product = 1;

    do
    {
        printf("Podaj liczbę (0 kończy program)): ");
        scanf("%f", &x);

        if (x != 0)
        {
            product = product * x;
        }

    } while (x != 0);

    printf("Iloczyn wszystkich liczb to %5.2f \n", product);

    return 0;
}