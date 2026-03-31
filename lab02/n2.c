#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float average;
};

int main() {
    struct Student students[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("\nСтудент %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].average);
    }

    printf("\nСписок студентов:\n");
    for (i = 0; i < 5; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].age, students[i].average);
    }

    for (i = 1; i < 5; i++) {
        if (students[i].average > students[maxIndex].average) {
            maxIndex = i;
        }
    }

    printf("\nЛучший студент: %s (%.2f)\n", students[maxIndex].name, students[maxIndex].average);

    return 0;
}