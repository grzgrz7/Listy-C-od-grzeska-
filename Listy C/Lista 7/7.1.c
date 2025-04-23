#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Napisz makro, które dla czterech otrzymanych w argumentach liczb zwraca ich średnią.

#define AVG(a, b, c, d) ((a + b + c + d) / 4)

int main()
{
    float average = AVG(1, 2, 3, 4);
    printf("%5.2f\n", average);

    return 0;
}