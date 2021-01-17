#include <stdio.h>

void odejmowanie()
{
    int a, b;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podaj swoja liczbe: ");
    scanf("%d", &b);
    int sum = a - b;
    printf("Po odjęciu liczby %d od %d otrzymujemy %d", a, b, sum);
}