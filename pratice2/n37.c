#include <stdio.h>

int main() {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;

    long long not_divisible = N - (N / 7);
    long long result = (N * N) - (not_divisible * not_divisible);

    printf("%lld\n", result);
    return 0;
}
