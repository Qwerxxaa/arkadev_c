#include <stdio.h>

int main() {

    int a, b;

    printf("Введите два целыхх числа: ");
    scanf("%d %d", &a, &b);
    double result = (double) a / b;
    printf("%2f", result); 

    return 0;
}