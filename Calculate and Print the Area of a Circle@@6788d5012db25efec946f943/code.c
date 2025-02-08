#include <stdio.h>

int main() {
    int radius;
    float area;

    scanf("%d", &radius);

    area = 3.14 * radius * radius;

    printf("Radius: %d\n", radius);
    printf("Area: %.2f\n", area);

    return 0;
}
