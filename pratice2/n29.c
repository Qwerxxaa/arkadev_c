#include <stdio.h>
int main() {
    int N, x, max = -1000000;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x % 5 == 0 && x > max)
            max = x;
    }
    printf("%d", max);
}