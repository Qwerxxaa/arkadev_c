#include <stdio.h>
int main() {
    int N, p = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        if (i % 3 == 0) p *= i;
    printf("%d", p);
}