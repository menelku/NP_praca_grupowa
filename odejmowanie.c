#include <stdio.h>

void dodawanie(int a, int b)
{
    int a, b;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podaj swoja liczbe: ");
    scanf("%d", &b);
    int sum = a - b;
    printf("Po odjeciu liczby %d od %d otrzymujemy %d", a, b, sum);
}
