#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        if (i % 4 == 0) continue;
        printf("%d ", i);
    }
}