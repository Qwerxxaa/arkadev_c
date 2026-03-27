#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, j;
    
    printf("Enter string: ");
    fgets(str, 100, stdin);
    
    printf("Enter char to remove: ");
    scanf("%c", &ch);
    
    i = 0;
    j = 0;
    
    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    
    printf("Result: %s", str);
    return 0;
}