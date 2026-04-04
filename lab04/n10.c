#include <stdio.h>

int main() {
    FILE *file;
    long file_size;
    char filename[256];

    printf("Введите имя файла: ");
    scanf("%255s", filename);

    file = fopen(filename, "rb");
    
    if (file == NULL) {
        printf("Ошибка: не удалось открыть файл '%s'\n", filename);
        return 1;
    }

    if (fseek(file, 0, SEEK_END) != 0) {
        printf("Ошибка: не удалось переместить указатель в конец файла\n");
        fclose(file);
        return 1;
    }

    file_size = ftell(file);
    
    if (file_size == -1) {
        printf("Ошибка: не удалось определить размер файла\n");
        fclose(file);
        return 1;
    }

    printf("Размер файла '%s': %ld байт\n", filename, file_size);

    fclose(file);
    
    return 0;
}