#include <stdio.h>

int main(){
    int n;

    n = 55;
    int *gpt = &n;
    *gpt = 2;
    int **ppt = &gpt;
    printf("%d\n", **ppt);

    return 0;

}