#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// nawet nie wiem jak to napisać, sprawdź se polecenie 

double Wn(double x, double n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        double wynik;
        wynik = ((2 * n - 1) * Wn(x, n - 1) - (n - 1) * Wn(x, n - 2)) / n;
        return wynik;
    }
}

int main()
{
    double x, n;

    printf("\nPodaj liczbe rzeczywista x: ");
    scanf("%lf", &x);

    printf("\nPodaj liczbe n: ");
    scanf("%lf", &n);

    if (n > 0) // || fmod(n, 1.0) == 0) - jednak nie musi być naturalna, bo n może być 0
    {
        printf("\nWynik to: %lf\n\n", Wn(x, n));
    }
    else
    {
        printf("n ma być wieksze niż 1");
    }

    return 0;
}