#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Obliczyć sumę od potęg n=0 do k potęgi
// dla ((2n)! / (4^n * (n!)^2 (2n+1))) * x^(2n+1) dla |x| < 1
// w programie należy zdefiniować funkcje liczące silnie oraz potęgę

long double potegowanie(double x, int i)
{
    long double z = 1;
    for (int j = 0; j < i; j++)
    {
        z = z * x;
    }
    return z;
}

long double silnia(int n)
{
    long double z = 1;
    for (int k = 1; k <= n; k++)
    {
        z = z * k;
    }
    return z;
}

long double wyrazenie(float x, int n)
{
    long double nominator;
    long double denominator;
    long double z;
    nominator = silnia(2 * n) * potegowanie(x, 2 * n + 1);
    // denominator = potegowanie(4, n) * silnia(n) * silnia(n) * (2 * n + 1); 
    denominator = potegowanie(4, n) * potegowanie(silnia(n), 2) * (2 * n + 1); // sprawdziłem, wychodzi to samo

    z = nominator / denominator;

    return z;
}

/*
long double wyrazenie(float x, int n)
{
    long double z;
    z = ((silnia(2*n) * potegowanie(x, 2*n + 1)) /
    potegowanie(4,n) * potegowanie(silnia(n),2) * (2*n + 1))

    return z;
}
*/

long double sumaSzereguWyrazenia(float x, int n)
{
    long double suma = 0;
    for (int j = 0; j <= n; j++)
    {
        suma = suma + wyrazenie(x, j);
    }
    return suma;
}

int main()
{

    // printf("%Lf\n", potegowanie(4, 40));
    // printf("%Lf\n", silnia(4));
    // było sprawdzane czy funkcje są dobrze zdefiniowane

    printf("\nBędziemy liczyć sumę szeregu od n=0 do k potęgi dla wyrażenia:\n\n");
    printf("((2n)! / (4^n * (n!)^2 (2n+1))) * x^(2n+1)    dla |x| < 1 i naturalnego n\n\n");

    float x;
    printf("Podaj x: \n");
    printf("(musi być -1 < x <1)\n");
    scanf("%f", &x);

    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    if ((x < 1 && x > -1) && n > 0)
    {
        printf("Suma szeregu tego wyrażenia to: %Lf\n", sumaSzereguWyrazenia(x, n));
    }
    else
    {
        printf("x i/lub i są niepoprawne\n");
        return 0;
    }

    return 0;
}