#include <stdio.h>
#include <string.h>

#define MAX_NAME 100

struct Person {
    char name[MAX_NAME];
    int age;
};

int main() {
    FILE *file;
    struct Person person;
    struct Person people[100];
    int choice;
    int count = 0; 
    int i;
    
    printf("\nБаза даных людей\n");
    
    while (1) {
        printf("\n1. Добавить человека\n");
        printf("2. Посмотреть всех\n");
        printf("3. Выход\n");
        printf("Выберите: ");
        scanf("%d", &choice);
        getchar();
        
        if (choice == 1) {
            printf("Введите имя: ");
            fgets(person.name, MAX_NAME, stdin);
            person.name[strlen(person.name) - 1] = '\0';
            
            printf("Введите возраст: ");
            scanf("%d", &person.age);
            getchar();

            file = fopen("people.dat", "ab");
            if (file == NULL) {
                printf("Ошибка открытия файла\n");
                return 1;
            }
            
            fwrite(&person, sizeof(struct Person), 1, file);
            fclose(file);
            
            printf("Человек добавлен\n");
        }
        else if (choice == 2) {
            file = fopen("people.dat", "rb");
            if (file == NULL) {
                printf("Файл не найден или пуст\n");
                continue;
            }
            
            printf("\nСписок людей:\n");
            count = 0;

            while (fread(&person, sizeof(struct Person), 1, file) == 1) {
                count++;
                printf("%d. %s, %d лет\n", count, person.name, person.age);
            }
            
            if (count == 0) {
                printf("Нет записей\n");
            }
            
            fclose(file);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Неверный выбор\n");
        }
    }
    
    return 0;
}