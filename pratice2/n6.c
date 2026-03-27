#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    int even_count = N / 2;

    printf("Количество четных чисел: %d\n", even_count);
    return 0;
}
