#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "hello world";
    char *p = str;
    int index = 0;
    
    while (*p != '\0') {
        if (index % 2 == 0) {
            *p = tolower(*p);
        } else {
            *p = toupper(*p);
        }
        p++;
        index++;
    }
    
    printf("%s", str);
    return 0;
}