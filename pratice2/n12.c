#include <stdio.h>
int main() {
    int N, x, sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x < 0) sum += x;
    }
    printf("%d", sum);
}