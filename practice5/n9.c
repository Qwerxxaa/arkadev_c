#include <stdio.h>

int main() {
    char pass[100];
    char *p = pass;
    int hasDigit = 0, hasLetter = 0;
    
    printf("Enter password: ");
    scanf("%s", pass);
    
    while (*p) {
        if (*p >= '0' && *p <= '9') hasDigit = 1;
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) hasLetter = 1;
        p++;
    }
    
    if (hasDigit && hasLetter) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}