#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz makro, które zwraca wartość bezwzględna podawanej w argumencie liczby

#define ABS(a) ((a < 0) ? -a : a)

int main()
{
    int a = ABS(-10);
    printf("%d\n", a);

    return 0;
}