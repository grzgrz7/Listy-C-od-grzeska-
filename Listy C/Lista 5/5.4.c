#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int x;
    scanf("%d", &x);

    switch (x)
    {
    case 1:
    case 2:
    case 3:
        printf("Mamy pierwszy kwartał\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("Mamy drugi kwartał\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Mamy trzeci kwartał\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("Mamy czwarty kwartał\n");
        break;
    default:
        printf("Nieprawidłowy numer miesiąca\n");
    } 

    return 0;
}