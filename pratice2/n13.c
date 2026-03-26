#include <stdio.h>
int main() {
    int N, x;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > 10) printf("%d ", x);
    }
}