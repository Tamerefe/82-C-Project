#include <stdio.h>

int main() {

    printf("Write the radius of the circle: ");

    float radius;
    float area = 0;
    float circumference = 0;
    float pi = 3.141593;

    scanf("%f", &radius);

    area = (radius* radius) * pi;

    circumference = 2 * radius * pi;

    printf("Area of circle: %.2f \n",area);
    printf("Circumference of the circle: %.2f",circumference);

    return 0;
}