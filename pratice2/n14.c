#include <stdio.h>

int main() {
    int n, x, max;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Число: ");
        scanf("%d", &x);
        
        if (i == 0 || x > max) {
            max = x;
        }
    }
    
    printf("%d\n", max);
    return 0;
}