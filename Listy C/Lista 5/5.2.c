#include <stdio.h>
#include <stdlib.h>

// Napisz program, który odpowiada na pytanie, czy wśród czterech liczb są choć dwie takie same.

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        printf("Mamy dwie takie same liczby w tym zbiorze");
    }
    else
    {
        printf("Nie ma dwóch takich samych liczb w tym zbiorze");
    }

    return 0;
}