#include <stdio.h>

int main() {
    char str[] = "I love C";
    char *words[10];
    char *p = str;
    int count = 0;
    int i;
    
    while (*p) {
        if (*p != ' ') {
            words[count] = p;
            count++;
            while (*p && *p != ' ') {
                p++;
            }
        } else {
            p++;
        }
    }
    
    for (i = count - 1; i >= 0; i--) {
        p = words[i];
        while (*p && *p != ' ') {
            printf("%c", *p);
            p++;
        }
        if (i > 0) printf(" ");
    }
    
    return 0;
}
