#include <stdio.h>

struct Student {
    char name[50];
    int vozrast;
    float sredniy_ball;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.vozrast);

    printf("Enter average: ");
    scanf("%f", &student.sredniy_ball);

    printf("\nStudent info:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.vozrast);
    printf("Average: %.2f\n", student.sredniy_ball);

    return 0;
}