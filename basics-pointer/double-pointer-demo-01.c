#include <stdio.h>

int main() {
    int a = 10;
    int *p = NULL;
    int **pp = NULL;

    p = &a;
    pp = &p;

    printf("Address a=%u \t Address p=%u \t Address pp=%u", &a, &p, &pp);
    printf("\n");
    printf("Value at the address stored by pp=%u equals address of a=%u", *pp, &a);    printf("\n");
    printf("Value at the address stored by p=%d equals value of **pp=%d and value of a=%d", *p, **pp, a);   printf("\n");

    return 0;
}