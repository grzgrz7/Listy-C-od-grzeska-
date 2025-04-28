#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję, która dla czterech otrzymanych w argumentach liczb zwraca ich średnią

float avg(int a, int b, int c, int d)
{
    float avg;
    avg = ((a + b + c + d) / 4.0);

    return avg;
}

int main()
{
    float a, b, c, d;
    printf("Podaj 4 liczby, z ktorych wezmiemy srednia: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float average;
    average = avg(a, b, c, d);
    printf("%5.2f\n", average);

    return 0;
}