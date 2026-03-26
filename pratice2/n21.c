#include <stdio.h>
int main() {
    int N;
    long long f = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i += 2)
        f *= i;
    printf("%lld", f);
}