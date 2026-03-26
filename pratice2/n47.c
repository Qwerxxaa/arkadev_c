#include <stdio.h>

int main() {
    int n, i = 1; 

    printf("Введите число: ");
    scanf("%d", &n);

    if (n < 0) n = -n;
    if (n == 0) i = 1; 

    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) { 
            i= 0;  
            break;       
        }
        n /= 10;
    }

    if (i) printf("Да\n");
    else printf("Нет\n");

    return 0;
}
