#include <stdio.h>

void dodawanie()
{
    int a, b;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podaj swoja liczbe: ");
    scanf("%d", &b);
    int suma = a + b;
    printf("Po dodaniu liczb: %d i %d otrzymujemy %d", a, b, suma);
}
