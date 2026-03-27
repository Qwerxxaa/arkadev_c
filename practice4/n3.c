#include <stdio.h>

int main(){
    int n, y; 
    n = 22;
    y = 4443;
    int *gpt = &n;
    int *ggt = &y;

    printf("До: %d\n", *gpt);
    printf("до %d\n", *ggt);

    *gpt = 43;
    *ggt = 21;

    printf("после: %d\n", *gpt);
    printf("после %d\n", *ggt);
    return 0;
    
}