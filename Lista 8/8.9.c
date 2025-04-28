#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Obliczyć sumę szeregu:
// od i=0 do k
// x^i
// gdy x jest liczbą rzeczywistą.
// W programie należy wykorzystać funkcję obliczania potęgi.
// W programie należy zdefiniować funkcje na potęgę.

long double potegowanie(long double x, int i)
{
    long double z = 1;
    for (int j = 0; j < i; j++)
    {
        z = z * x;
    }
    return z;
}

long double sumaSzeregu(long double x, int i)
{
    long double sum = 0;
    for (int k = 0; k <= i; k++)
    {
        sum = sum + potegowanie(x, k);
    }
    return sum;
}

int main()
{
    long double x;
    int i;
    long double wynikPotegowania;

    printf("\nPodaj liczbe, ktora podniesiemy do potegi: ");
    scanf("%Lf", &x);
    printf("Podaj jej potege: ");
    scanf("%d", &i);

    printf("\nWynik potegowania to %.2Lf\n", potegowanie(x, i));
    printf("Suma szeregu to %.2Lf\n\n", sumaSzeregu(x, i));

    return 0;
}