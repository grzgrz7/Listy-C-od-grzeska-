#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz makro, które dla czterech otrzymanych w argumentach liczb zwraca ich iloczyn

#define PR(a, b, c, d) (a * b * c * d)

int main()
{
    int a, b, c, d, product;
    a = 2;
    b = 3;
    c = 4;
    d = 5;
    product = PR(a, b, c, d);

    printf("%d\n", product);
    return 0;
}