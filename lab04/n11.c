#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[256];
    char buffer[1024];
    int line_count = 0;
    
    printf("Введите имя файла: ");
    scanf("%255s", filename);

    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Ошибка: не удалось открыть файл '%s'\n", filename);
        return 1;
    }
    
    printf("\nЧтение файла '%s':\n", filename);

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        line_count++;
        printf("%d: %s", line_count, buffer);
    }

    if (feof(file)) {
        printf("Достигнут конец файла\n");
        printf("Всего прочитано строк: %d\n", line_count);
    } else if (ferror(file)) {
        printf("Ошибка при чтении файла!\n");
        perror("Причина ошибки");
    }
    
    fclose(file);
    return 0;
}