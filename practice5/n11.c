
#include <stdio.h>

int main() {
    char str[] = "aaabbc";
    char *p = str;
    int count;
    
    while (*p) {
        count = 1;
        
        while (*(p + 1) && *p == *(p + 1)) {
            count++;
            p++;
        }
        
        printf("%c%d", *p, count);
        p++;
    }
    
    return 0;
}