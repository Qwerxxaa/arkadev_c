#include <stdio.h>

int main() 
{
    int x;

    printf("Введите число x: ");
    scanf("%d", &x);

    int prim1 = x * x + 2 * x + 1;

    int prim2 = (x + 1) * (x + 1) - (x - 1) * (x - 1);

    printf("x^2 + 2x + 1 = %d\n", prim1);
    printf("(x + 1)^2 - (x - 1)^2 = %d\n", prim2);

    return 0;
}