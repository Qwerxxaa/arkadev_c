#include <stdio.h>

int main() {
    long long N, sum = 0;
    if (scanf("%lld", &N) != 1) return 0;

    if (N < 0) N = -N;

    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }

    printf("%lld\n", sum);
    return 0;
}