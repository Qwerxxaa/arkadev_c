#include <stdio.h>

int main(){
    int n;
    printf("Введите кол чисел в массиве ");
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
    printf("\nИсходный массив: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        if(arr[i]<0){
            arr[i] = 0;
        }
    }
    printf("Массив после замены отрицательных элементов на ноль: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}