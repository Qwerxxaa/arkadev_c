#include <stdio.h>

int main(){
    int n;
    n = 42;
    int *gpt = &n;

    printf("%d\n", *gpt);

    *gpt = 25;

    printf("%d\n", *gpt);

    return 0;
}