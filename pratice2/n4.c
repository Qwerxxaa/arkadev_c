#include <stdio.h>

int main() {
    int N, sum = 0, i;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        if(i % 5 == 0)
            sum += i;
    }

    printf("%d \n", sum);
    return 0;
}