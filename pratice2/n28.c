#include <stdio.h>
int has3(int x) {
    while (x) {
        if (x % 10 == 3) return 1;
        x /= 10;
    }
    return 0;
}
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        if (!has3(i)) printf("%d ", i);
}