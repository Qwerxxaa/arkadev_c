#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("sredne: %d\n", (a + b + c) /3);

    return 0;
    
}