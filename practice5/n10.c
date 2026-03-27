#include <stdio.h>

int main() {
    char str[] = "kmkknknmk";
    char *p = str;
    int len = 0;

    while (*p) {
        len++;
        p++;
    }
    
    int half = len / 2;
    p = str;
    
    for (int i = 0; i < half; i++) {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    
    while (*p) {
        printf("%c", *p);
        p++;
    }
    
    return 0;
}