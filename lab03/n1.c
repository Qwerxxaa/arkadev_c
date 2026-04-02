#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}