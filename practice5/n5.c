#include <stdio.h>

int main(){
    char str[] = "hello!!!!";
    char *p = str;
    int count = 0;

    while(*p != '\0'){
        if(*p == '!'){
            count += 1;
        }
        p++;
    }
    if (count > 3){
        printf("STOP");

    }
    else{
        printf("Okay");
    }
    return 0;
}