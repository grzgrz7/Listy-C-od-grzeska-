#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// polecenie:
// obliczyć szeregi:
// sinh(ix), cosh(ix), tgh(ix), ctgh(ix) oraz (sinhx + sinh^2(x))
// od i=1 do k (potęgi)

// const long double e = 2.718281828459045235360287471352;
const double e = 2.718281828459045; // 2353602874; - odcięte z uwagi na ogranicznie
// do 15 miejsc po przecinku na macu, jak masz windows to na 99% do 18
// nie pozdrawiam

double potegowanie(double liczba, int wykladnik)
{
    double z = 1;
    for (int j = 0; j < wykladnik; j++)
    {
        z = z * liczba;
    }
    return z;
}

double sinhix(double x, int i)
{
    double z;
    z = ((potegowanie(e, i * x)) - (potegowanie(e, (-i * x)))) / 2.0;
    return z;
}

double coshix(double x, int i)
{
    double z;
    z = ((potegowanie(e, i * x)) + (potegowanie(e, (-i * x)))) / 2.0;
    return z;
}

double tghix(double x, int i)
{
    long double z;
    z = ((potegowanie(e, i * x)) - (potegowanie(e, (-i * x)))) /
        ((potegowanie(e, i * x)) + (potegowanie(e, (-i * x))));
    return z;
}

double ctghix(double x, int i)
{
    double z;
    z = ((potegowanie(e, i * x)) + (potegowanie(e, -i * x))) /
        ((potegowanie(e, i * x)) - (potegowanie(e, -i * x)));
    return z;
}

double tamtaSumaSinhix(double x, int i)
{
    double z;
    z = sinhix(x, i) + potegowanie(sinhix(x, i), 2);
    return z;
}

// koniec wypisywania funkcji, tera int main

int main()
{

    char tryb;
    printf("\nTryby: \n");
    printf("a - liczy sinh(ix) \n");
    printf("b - liczy cosh(ix) \n");
    printf("c - liczy tgh(ix) \n");
    printf("d - liczy ctgh(ix) \n");
    printf("e - liczy sinh(ix) + (sinh(ix))^2 \n");
    printf("\nCo chcesz policzyc? : ");
    scanf("%c", &tryb);

    double x;
    printf("Wybierz podstawe (x): ");
    scanf("%lf", &x);

    int i;
    printf("Wybierz wielkrotnosc argumentu (i): ");
    scanf("%d", &i);

    double suma = 0;

    switch (tryb)
    {
    case 'a':
        // long double suma = 0;
        for (int j = 1; j <= i; j++)
        {
            suma = suma + sinhix(x, j);
        }
        printf("\nWynik sinh(x = %.2lf * i = %d) to: %Lf\n", x, i, sinhix(x, i));
        printf("Suma szeregu dla kazdej potegi od 0 do %d to: %Lf\n\n", i, suma);
        break;
    case 'b':
        // long double suma = 0;
        for (int j = 1; j <= i; j++)
        {
            suma = suma + coshix(x, j);
        }
        printf("\nWynik cosh(x = %.2lf * i = %d) to: %Lf\n", x, i, coshix(x, i));
        printf("Suma szeregu dla kazdej potegi od 0 do %d to %Lf\n\n", i, suma);
        break;
    case 'c':
        // long double suma = 0;
        for (int j = 1; j <= i; j++)
        {
            suma = suma + tghix(x, j);
        }
        printf("\nWynik tgh(x = %.2lf * i = %d) to: %Lf\n", x, i, tghix(x, i));
        printf("Suma szeregu dla kazdej potegi od 0 do %d to: %Lf\n\n", i, suma);
        break;
    case 'd':
        // long double suma = 0;
        for (int j = 1; j <= i; j++)
        {
            suma = suma + ctghix(x, j);
        }
        printf("\nWynik ctghix(x = %.2lf * i = %d) to: %Lf\n", x, i, ctghix(x, i));
        printf("Suma szeregu dla kazdej potegi od 0 do %d to: %Lf\n\n", i, suma);
        break;
    case 'e':
        // long double suma = 0;
        for (int j = 1; j <= i; j++)
        {
            suma = suma + (sinhix(x, j) + potegowanie(sinhix(x, j), 2));
        }
        printf("\nWynik sinh(ix) + (sinh(ix))^2 (gdzie x = %.2lf i i = %d) to %Lf\n", x, i, tamtaSumaSinhix(x, i));
        printf("Suma szeregu dla kazdej potegi od 0 do %d to: %Lf\n\n", i, suma);
        break;
    default:
        printf("Podaj prawidlowy tryb\n");
    }

    return 0;
}