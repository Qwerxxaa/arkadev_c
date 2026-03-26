#include <stdio.h>
int main() {
    int N, prime = 1;
    scanf("%d", &N);
    if (N < 2) prime = 0;
    for (int i = 2; i * i <= N; i++)
        if (N % i == 0) prime = 0;
    printf(prime ? "YES" : "NO");
}