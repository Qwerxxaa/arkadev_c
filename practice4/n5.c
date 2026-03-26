#include <stdio.h>

int main() {
    int x, y;
    x = 10;
    y = 20;
    
    int *gpt = &x;  
    int *ppt = &y;  
    int *ppf = &x; 
    

    printf("Адрес, хранящийся в gpt: %p\n", (void*)gpt);
    printf("Адрес, хранящийся в ppt: %p\n", (void*)ppt);
    printf("Адрес, хранящийся в ppf: %p\n", (void*)ppf);

    printf("Значение *gpt: %d\n", *gpt);
    printf("Значение *ppt: %d\n", *ppt);
    printf("Значение *ppf: %d\n", *ppf);
    
    if (gpt == ppt) {
        printf("✓ gpt и ppt указывают на один адрес\n");
    } else {
        printf("✗ gpt и ppt указывают на разные адреса\n");
        printf("  gpt = %p, ppt = %p\n", (void*)gpt, (void*)ppt);
    }
    
    if (gpt == ppf) {
        printf("✓ gpt и ppf указывают на один адрес\n");
        printf("  Оба указывают на переменную x\n");
    } else {
        printf("✗ gpt и ppf указывают на разные адреса\n");
    }
    
    return 0;
}