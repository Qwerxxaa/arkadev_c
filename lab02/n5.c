#include <stdio.h>

enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};

struct Schedule {
    char name[50];
    enum Day day;
};

int main() {
    enum Day today;
    int choice;

    printf("Enter day number (0-Mon ... 6-Sun): ");
    scanf("%d", &choice);

    today = choice;

    printf("Today is: ");
    switch (today) {
        case MON: printf("Monday\n"); break;
        case TUE: printf("Tuesday\n"); break;
        case WED: printf("Wednesday\n"); break;
        case THU: printf("Thursday\n"); break;
        case FRI: printf("Friday\n"); break;
        case SAT: printf("Saturday\n"); break;
        case SUN: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }

    struct Schedule s;

    printf("Enter event name: ");
    scanf("%s", s.name);

    printf("Enter day for event (0-6): ");
    scanf("%d", (int*)&s.day);

    printf("Event: %s\n", s.name);
    printf("Day: %d\n", s.day);

    return 0;
}