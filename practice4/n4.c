#include <stdio.h>

int main(){
    int n;
    n = 5;
    int *ptr = &n;

    printf("Адрес переменной (ptr): %p\n", (void*)ptr);
    return 0;

}