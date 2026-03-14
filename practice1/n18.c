#include <stdio.h>
#include <limits.h>

int main() {
    int x;

    printf("Введите число: ");
    scanf("%d", &x);

    int result = x + INT_MAX;

    printf("Результат: %d\n", result);

    return 0;
}