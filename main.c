#include <stdio.h>
#include "header.h"

int main()
{
    int a;
    printf("Wybierz co chcesz zrobic\n1. Hello World!\n2.Dodawanie\n3. Odejmowanie\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Hello World! :)");
        break;

    case 2:
        printf("Funkcja dodawania: ");
        dodawanie();
        break;

    case 3:
        printf("Funkcja odejmowania: ");
        odejmowanie();
        break;

    default:
        break;
    }
    return 0;
}
