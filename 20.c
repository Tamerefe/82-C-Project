#include <stdio.h>

int main(){

    double tri1,tri2,tri3;

    printf("Calculate Triangle type\n");

    printf("\n1st side: ");
    scanf("%lf",&tri1);

    printf("\n2nd side: ");
    scanf("%lf",&tri2);

    printf("\n3rd side: ");
    scanf("%lf",&tri3);

    if(tri1 == tri2 && tri2 == tri3){
        printf("\nAll sides are equals");
        printf("\nThis is an equilateral triangle");
    }else if(tri1 == tri2 || tri2 == tri3 || tri1 == tri3){
        printf("\n2 sides are equal");
        printf("\nThis is an isosceles triangle");
    }else{
        printf("\nAll sides are not equal");
        printf("\nThis is a mixed triangle");
    }

    return 0;
}