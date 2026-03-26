#include <stdio.h>

int main() {
    int n, p = 1;
    scanf("%d", &n);

    if (n == 0) p = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        int d = n % 10;
        if (d != 0) {   
            p *= d;
        }
        n /= 10;
    }

    printf("%d\n", p);
    return 0;
}
