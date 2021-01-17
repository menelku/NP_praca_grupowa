#include <stdio.h>

void dodawanie()
{
    int a, b;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podaj swoja liczbe: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Po dodaniu liczby %d i %d otrzymujemy %d", a, b, sum);
}
