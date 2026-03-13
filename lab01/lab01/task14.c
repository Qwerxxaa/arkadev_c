#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("a = %d, address = %p\n", a, (void*)&a);
    printf("b = %d, address = %p\n", b, (void*)&b);
    printf("c = %d, address = %p\n", c, (void*)&c);

    printf("Разница между a и b: %ld байт\n", (char*)&b - (char*)&a);
    printf("Разница между b и c: %ld байт\n", (char*)&c - (char*)&b);

    return 0;
}