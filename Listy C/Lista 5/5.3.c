#include <stdio.h>
#include <stdlib.h>

// Napisz program, który wystawi ocenę z testu:
// 0 - 20 pkt – 2.0
// 21 - 25 pkt – 3.0
// 26 - 30 pkt – 3.5
// 36 - 40 pkt – 4.0
// 41 - 45 pkt – 4.5
// 46 - 50 pkt – 5.0

int main()
{

    int punkty;
    printf("Ile student ma punktów?: \n");
    scanf("%d", &punkty);

    if (punkty <= 20)
    {
        printf("Ocena Studenta to 2.0");
    }
    else if (punkty <= 25)
    {
        printf("Ocena Studenta to 3.0");
    }
    else if (punkty <= 30)
    {
        printf("Ocena Studenta to 3.5");
    }
    else if (punkty <= 40)
    {
        printf("Ocena Studenta to 4.0");
    }
    else if (punkty <= 45)
    {
        printf("Ocena Studenta to 4.5");
    }
    else if (punkty <= 50)
    {
        printf("Ocena Studenta to 5.0");
    }
    return 0;
}