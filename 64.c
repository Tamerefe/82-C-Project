#include <stdio.h>

#define Pi 3.141593
float area(double rad);
float circumference(double rad);

int main() {

    printf("Write the radius of the circle: ");

    double radius;
    scanf("%lf", &radius);
    
    float are = area(radius),circ = circumference(radius);

    printf("Area of circle: %.2f \n",are);
    printf("Circumference of the circle: %.2f",circ);

    return 0;
}

float area(double rad){
    return (float)(rad * rad * Pi);
}

float circumference(double rad){
    return (float)(2 * rad * Pi);
}