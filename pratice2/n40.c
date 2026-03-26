#include <stdio.h>

int main() {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;

    for (long long i = 2; i <= N; i++) {
        int is_prime = 1;
        for (long long j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%lld ", i);
        }
    }

    return 0;
}