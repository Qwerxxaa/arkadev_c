#include <stdio.h>

int main(){
    char str[] = "hello";
    char *p = str;

    while(*p != '\0'){
        if(*p == 'e' || *p == 'o'){
            *p = '*';
        }
        p++;
    }
    printf("%s\n", str);
    return 0;
}