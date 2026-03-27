#include <stdio.h>

int main() {
    char str[] = "aaabbcc";
    char *read = str;
    char *write = str;
    
    while (*read) {
        if (*read != *(read - 1) || read == str) {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
    
    printf("%s", str);
    return 0;
}