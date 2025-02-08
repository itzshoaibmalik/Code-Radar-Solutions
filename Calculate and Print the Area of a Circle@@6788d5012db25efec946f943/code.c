#include <stdio.h>

int main() {
    int radius;
    float area;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;

    printf("Radius: %d\n", radius);
    printf("Area: %.2f\n", area);

    return 0;
}
