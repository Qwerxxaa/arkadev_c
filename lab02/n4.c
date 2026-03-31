#include <stdio.h>

struct Rectangle {
    float shirina;
    float high;
};

float ploshad(struct Rectangle r) {
    return r.shirina * r.high;
}

float perimetr(struct Rectangle *r) {
    return 2 * (r->shirina + r->high);
}

int main() {
    struct Rectangle rect;

    printf("Enter width and height:\n");
    scanf("%f %f", &rect.shirina, &rect.high);

    printf("Area: %.2f\n", ploshad(rect));
    printf("Perimeter: %.2f\n", perimetr(&rect));

    return 0;
}