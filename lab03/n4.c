#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Введите начальный размер: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка памяти\n");
        return 1;
    }

    printf("Введите элементы:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Введите новый размер: ");
    scanf("%d", &m);

    if (m > n) {
        int *tmp = (int*)realloc(arr, m * sizeof(int));
        if (tmp == NULL) {
            printf("Ошибка realloc\n");
            free(arr);
            return 1;
        }
        arr = tmp;

        printf("Введите новые элементы:\n");
        for (int i = n; i < m; i++) {
            scanf("%d", &arr[i]);
        }

        n = m;
    }

    printf("Массив после увеличения:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nВведите размер для уменьшения: ");
    scanf("%d", &m);

    if (m < n && m > 0) {
        int *tmp = (int*)realloc(arr, m * sizeof(int));
        if (tmp != NULL) {
            arr = tmp;
            n = m;
        }
    }

    printf("Массив после уменьшения:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}