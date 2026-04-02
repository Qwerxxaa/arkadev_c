#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n;
    printf("Количество студентов: ");
    scanf("%d", &n);

    struct Student *st = malloc(n * sizeof(struct Student));
    if (!st) return 1;

    for (int i = 0; i < n; i++) {
        printf("Имя и возраст: ");
        scanf("%s %d", st[i].name, &st[i].age);
    }

    printf("\nСписок:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", st[i].name, st[i].age);
    }

    int max = 0;
    for (int i = 1; i < n; i++) {
        if (st[i].age > st[max].age) {
            max = i;
        }
    }

    printf("Самый старший: %s %d\n", st[max].name, st[max].age);

    free(st);
    return 0;
}