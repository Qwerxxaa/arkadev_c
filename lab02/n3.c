#include <stdio.h>

struct Date {
    int den, mesyac, god;
};

struct Person {
    char name[50];
    struct Date data_rozhdeniya;
};

int main() {
    struct Person people[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name and birth date (day month year):\n");
        scanf("%s %d %d %d", people[i].name,
              &people[i].data_rozhdeniya.den,
              &people[i].data_rozhdeniya.mesyac,
              &people[i].data_rozhdeniya.god);
    }

    printf("\nAll people:\n");
    for (i = 0; i < 3; i++) {
        printf("%s: %d.%d.%d\n",
               people[i].name,
               people[i].data_rozhdeniya.den,
               people[i].data_rozhdeniya.mesyac,
               people[i].data_rozhdeniya.god);
    }

    printf("\nBorn after 2000:\n");
    for (i = 0; i < 3; i++) {
        if (people[i].data_rozhdeniya.god > 2000) {
            printf("%s\n", people[i].name);
        }
    }

    return 0;
}