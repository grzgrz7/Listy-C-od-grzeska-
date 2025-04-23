#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Należy wczytać ciąg liczb rzeczywistych.
// Wczytywanie należy zakończyć, gdy pojawi się liczba ujemna.
// Dla każdej wczytanej liczby należy obliczyć jej sześcian.
// Numer kolejny liczby, tę liczbę oraz jej sześcian należy wyświetlić na ekranie.

int main()
{

    float x;
    int i = 1;
    float cube;

    do
    {
        cube = 1;
        printf("Podaj liczbę (ujemna kończy program): ");
        scanf("%f", &x);
        cube = x * x * x;
        printf("Podana liczba ma numer %d,\nMa wartość %5.2f,\nOraz ma szcześcian równy %5.2f\n", i, x, cube);
        i = i + 1;

    } while (x >= 0);

    printf("I tym kończymy program!\n");

    return 0;
}