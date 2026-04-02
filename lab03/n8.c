#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int n = 0;
    int choice;

    while (1) {
        printf("\n1 - добавить\n2 - удалить\n3 - показать\n0 - выход\n");
        scanf("%d", &choice);

        if (choice == 0) break;

        if (choice == 1) {
            int value;
            printf("Введите число: ");
            scanf("%d", &value);

            int *tmp = realloc(arr, (n + 1) * sizeof(int));
            if (!tmp) {
                printf("Ошибка памяти\n");
                continue;
            }

            arr = tmp;
            arr[n] = value;
            n++;
        }

        else if (choice == 2) {
            if (n == 0) {
                printf("Список пуст\n");
                continue;
            }

            int index;
            printf("Введите индекс: ");
            scanf("%d", &index);

            if (index < 0 || index >= n) {
                printf("Ошибка индекса\n");
                continue;
            }

            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            n--;

            int *tmp = realloc(arr, n * sizeof(int));
            if (tmp || n == 0) {
                arr = tmp;
            }
        }

        else if (choice == 3) {
            printf("Список:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    free(arr);
    return 0;
}