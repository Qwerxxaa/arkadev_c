#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка памяти\n");
        return 1;
    }

    printf("Введите элементы:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Введите индекс для удаления: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Неверный индекс\n");
        free(arr);
        return 1;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    int *tmp = realloc(arr, n * sizeof(int));
    if (tmp != NULL || n == 0) {
        arr = tmp;
    }

    printf("Результат:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}