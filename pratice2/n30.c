#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int r = i * j;
            if (r > 50) continue;
            printf("%d*%d=%d ", i, j, r);
        }
        printf("\n");
    }
}