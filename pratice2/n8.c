#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Введите число N: ");
    scanf("%d", &N);

   
    for (int i = 1; i <= N; i++) {
     
        if (i % 2 != 0) {
            sum += i; 
        }
    }

    printf("Сумма нечетных чисел от 1 до %d: %d\n", N, sum);
    return 0;
}
