#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba ujemna.
// Obliczyć sumę odwrotności wczytanych liczb.

int main()
{

    float x;
    float sum = 1;

    do
    {
        printf("Podaj liczbę (ujemna liczba kończy program): ");
        scanf("%f", &x);

        sum = sum + x;

    } while (x >= 0);

    float inverse_sum;

    
        inverse_sum = 1 / sum;
        printf("Odwrotność sumy to %5.5f \n", inverse_sum);
    
    

    return 0;
}