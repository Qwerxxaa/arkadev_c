#include <stdio.h>

int main() {
    long long N, K;
    if (scanf("%lld %lld", &N, &K) != 2) return 0;

    for (long long i = 1; i <= N; i++) {
        long long j = K - i;
        if (j >= 1 && j <= N) {
            printf("%lld %lld\n", i, j);
        }
    }

    return 0;
}
