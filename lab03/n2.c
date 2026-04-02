#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Элементы массива:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}