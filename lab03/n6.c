#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (!arr) return 1;

    printf("Введите элементы:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index, value;
    printf("Введите индекс и значение: ");
    scanf("%d %d", &index, &value);

    if (index < 0 || index > n) {
        printf("Ошибка индекса\n");
        free(arr);
        return 1;
    }

    int *tmp = realloc(arr, (n + 1) * sizeof(int));
    if (!tmp) {
        free(arr);
        return 1;
    }

    arr = tmp;

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    n++;

    printf("Результат:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}