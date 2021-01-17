#include <stdio.h>

void odejmowanie()
{
    int a, b;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podaj swoja liczbe: ");
    scanf("%d", &b);
    int suma = a - b;
    printf("Po odjeciu liczby %d od %d otrzymujemy %d", a, b, suma);
}
