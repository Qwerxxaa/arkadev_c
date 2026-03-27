#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Введите число: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) n = -n;

        while (n > 0) {
            n /= 10;   
            count++;   
        }
    }

    printf("Количество цифр: %d\n", count);
    return 0;
}
