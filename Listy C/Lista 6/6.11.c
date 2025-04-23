#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 6.11
// Należy napisać program, który pyta się o pewną stałą liczbę tak długo, aż zostanie ona odgadnięta.
// Po nieudanej próbie program informuje, że szukana liczba jest większa albo mniejsza od podanej liczby.
// dodatkowo na laby: dopisać ile prób zajęło zgadnięcie

int main()
{

    srand(time(NULL));

    int losowaLiczba = rand() % 101;
    int zgadnietaLiczba;
    int i = 1;

    printf("Podaj liczbe od 0 do 100: ");
    scanf("%d", &zgadnietaLiczba);

    while (zgadnietaLiczba != losowaLiczba)
    {

        if (zgadnietaLiczba > losowaLiczba)
        {
            printf("Liczba jest mniejsza\n");
        }
        else if (zgadnietaLiczba < losowaLiczba)
        {
            printf("Liczba jest wieksza\n");
        }

        printf("Podaj kolejna liczbe od 0 do 100: ");
        scanf("%d", &zgadnietaLiczba);
        i = i + 1;
    }

    printf("Brawo! Odpowiedz to: %d\n", zgadnietaLiczba);
    printf("(Calosc zajela %d prob)\n", i);

    return 0;
}