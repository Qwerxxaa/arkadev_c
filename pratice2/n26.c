#include <stdio.h>
int sumDigits(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        if (sumDigits(i) > 10) printf("%d ", i);
}