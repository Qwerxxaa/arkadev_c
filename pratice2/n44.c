#include <stdio.h>

int main() {
    int n, max = 0;
    
    printf("Введите число: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    while (n > 0) {
        int d = n % 10; 
        if (d > max) max = d;
        n /= 10;        
    }

    printf("Результат: %d\n", max);
    return 0;
}
