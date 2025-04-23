#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba 0.
// Określić największą wczytywaną liczbę.

int main()
{

    float x;
    float max;

    do
    {
        printf("Podaj Liczbę: ");
        scanf("%f", &x);
        
        if (x > max)
        {
            max = x;
        }

    } while (x != 0);

    printf("Największa Liczba to: %5.2f\n", max);

    return 0;
}