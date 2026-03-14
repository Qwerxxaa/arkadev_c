#include <stdio.h>

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Число четное\n");
    } else {
        printf("Число нечетное\n");
    }

    return 0;
}