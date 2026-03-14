#include <stdio.h>

int main() {
    int a = 5;

    printf("Начальное a = %d\n", a);
    
    a++; 
    printf("После a++: %d\n", a);

    ++a; 
    printf("После ++a: %d\n", a);

    return 0;
}