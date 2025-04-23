#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba ujemna.
// Dla każdej wczytanej liczby należy obliczyć jej kwadrat.
// Numer kolejny liczby, tę liczbę oraz jej kwadrat należy wyświetlić na ekranie.

int main()
{
    float x;
    int i = 1;
    float square;

    do
    {
        square = 1;
        printf("Podaj kolejną liczbę (ujemna kończy program): ");
        scanf("%f", &x);
        square = x * x;
        printf("Jest to liczba nr %d\nPodałeś liczbę %5.2f\nOraz jej kwadrat to %5.2f\n", i, x, square);
        i = i + 1;
    } while (x >= 0);

    printf("I to kończy program!");

    return 0;
}