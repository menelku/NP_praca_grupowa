#include <stdio.h>
#include "header.h"

int main()
{
    int a;
    printf("Wybierz co chcesz zrobic\n1. Hello world!\n2.Dodawanie\n3. Odejmowanie\n4.\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:

        break;

    case 2:
        dodawanie();
        break;

    case 3:
        odejmowanie();
        break;

    default:
        break;
    }
    return 0;
}