#include <stdio.h>

int main(){
    int n; 
    n = 90;
    int *gpt = &n;

    int **ppt = &gpt;
    printf("%d\n", **ppt);
    return 0;
}