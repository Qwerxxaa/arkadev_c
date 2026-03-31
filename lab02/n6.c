#include <stdio.h>

typedef enum { INT, FLOAT, CHAR } DataType;

union Data {
    int i;
    float f;
    char c;
};

struct Info {
    DataType type;
    union Data value;
};

void printInfo(struct Info info) {
    if (info.type == INT) printf("Тип INT: %d\n", info.value.i);
    else if (info.type == FLOAT) printf("Тип FLOAT: %.2f\n", info.value.f);
    else if (info.type == CHAR) printf("Тип CHAR: %c\n", info.value.c);
}

int main() {
    union Data d;
    struct Info item;

    printf("ТестUnion\n");
    d.i = 10;
    d.f = 220.5; 
    d.c = 'A';   

    printf("Значение i испорчено: %d\n", d.i);
    printf("Значение f испорчено: %.2f\n", d.f);
    printf("Значение c актуально: %c\n\n", d.c);

    printf("Тест\n");
    item.type = FLOAT;
    item.value.f = 3.14;
    printInfo(item);

    return 0;
}
