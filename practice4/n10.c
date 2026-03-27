#include <stdio.h>

int main(){
    int n; 
    n = 5555;
    int *gpt = &n;

    printf("%zu\n", sizeof*gpt);
    return 0;
}