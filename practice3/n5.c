#include <stdio.h>

int n;

int main(){
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Ошибка: количество элементов должно быть положительным!\n");
        return 1;
    }
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int negative_count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < 0){
            negative_count++;
        }   
    }
    printf("\nРезультаты:\n");
    printf("Массив: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Количество отрицательных элементов: %d\n", negative_count);
    return 0;
}