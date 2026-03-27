#include <stdio.h>

int main() {
    int num[10];
    
    printf("Введите 10 целых чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    
    printf("в обратном порядке:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    return 0;
}