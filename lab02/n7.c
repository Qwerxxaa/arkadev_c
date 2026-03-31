#include <stdio.h>
#include <string.h>

typedef enum { FIRST = 1, SECOND, THIRD, FOURTH, FIFTH } Course;

typedef struct {
    char name[50];
    int age;
    Course course;
    float grade;
} Student;

void addStudent(Student *s) {
    printf("Введите имя, возраст, курс (1-5) и средний балл: ");
    scanf("%s %d %d %f", s->name, &s->age, (int*)&s->course, &s->grade);
}

void printStudents(Student *arr, int size) {
    for (int i = 0; i < size; i++) {
        Student *s = arr + i;
        printf("%s %d %d %.1f\n", s->name, s->age, s->course, s->grade);
    }
}

void findByName(Student *arr, int size) {
    char searchName[50];
    printf("\nВведите имя для поиска: ");
    scanf("%s", searchName);
    
    for (int i = 0; i < size; i++) {
        if (strcmp((arr + i)->name, searchName) == 0) {
            printf("Найдено: %s %d курс %.1f балл\n", (arr + i)->name, (arr + i)->course, (arr + i)->grade);
            return;
        }
    }
    printf("Студент не найден\n");
}

void sortByGrade(Student *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((arr + j)->grade < (arr + j + 1)->grade) {
                Student temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    Student st[100];
    int n;

    printf("Сколько студентов добавить? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        addStudent(&st[i]);
    }

    printf("\nСписок студентов:\n");
    printStudents(st, n);

    printf("\nСортировка по баллу...\n");
    sortByGrade(st, n);
    printStudents(st, n);

    findByName(st, n);

    return 0;
}
