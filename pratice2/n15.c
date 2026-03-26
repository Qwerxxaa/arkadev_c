#include <stdio.h>
int main() {
    int N, x, min, found = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            if (!found || x < min) {
                min = x;
                found = 1;
            }
        }
    }
    if (found) printf("%d", min);
}