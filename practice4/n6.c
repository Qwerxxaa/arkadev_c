#include <stdio.h>

int main() {
    int n = 33;
    
    int *gpt = &n;
    int *ppt = NULL;
    ppt = gpt;
    
    printf("Значение *gpt: %d\n", *gpt);
    printf("Значение *ppt: %d\n", *ppt);
    
    return 0;
}
