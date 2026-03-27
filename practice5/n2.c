#include <stdio.h>

int main() {
    char str[] = "hello";
    char *p = str;
    int len = 0;

    while(*p != '\0'){
        len++;
        p++;

    }
    printf("%d", len);
    return 0;
}