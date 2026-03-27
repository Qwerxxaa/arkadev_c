#include <stdio.h>
int main() {
    int N, x, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > 0) count++;
    }
    printf("%d", count);
}