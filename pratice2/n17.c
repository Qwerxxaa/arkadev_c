#include <stdio.h>
int main() {
    int x, sum = 0;
    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        if (x > 0) sum += x;
    }
    printf("%d", sum);
}