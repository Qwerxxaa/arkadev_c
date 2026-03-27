#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    if (scanf("%d", &N) != 1) return 1;

    for (int i = 1; i <= N; i++) {
        int square = i * i;
        if (square > 50) {
            printf("%d ", square);
        }
    }
    
    return 0;
}
