#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int x;
    printf("Podaj numer kwartału (1-4): ");
    scanf("%d", &x);

    if (x >= 1 && x <= 4)
    {
    }
    else
    {
        printf("Rerun i podaj odpowiedni numer kwartalu.\n");
        exit(1);
    }

    switch (x)
    {
    case 1:
        printf("W tym kwartale mamy Styczeń, Luty i Marzec.\n");
        break;
    case 2:
        printf("W tym kwartale mamy Kwiecień, Maj i Czerwiec.\n");
        break;
    case 3:
        printf("W tym kwartale mamy Lipiec, Sierpień i Wrzesień.\n");
        break;
    case 4:
        printf("W tym kwartale mamy Październik, Listopad i Grudzień.\n");
        break;
    }

    return 0;
}