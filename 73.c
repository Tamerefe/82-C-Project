#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c,delta,x1,x2;

    printf("Finding the roots of a quadratic equation with one unknown\n");

    printf("Please enter the A value: ");
    scanf("%d",&a);
    printf("Please enter the B value: ");
    scanf("%d",&b);    
    printf("Please enter the C value: ");
    scanf("%d",&c);

    delta = (b * b) - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("Your equation is: %dx^2 ", a);
    if (b >= 0) {
        printf("+ %dx ", b);
    } else {
        printf("- %dx ", -b);
    }
    if (c >= 0) {
        printf("+ %d\n", c);
    } else {
        printf("- %d\n", -c);
    }

    if (delta < 0){
        printf("\nThe equation has no real roots");
    } else if( delta == 0){
        printf("\nThe roots of the equation are equal");
        printf("\nx1 = x2 = %d",x1);
    } else {
        printf("\nThe equation has 2 different roots");
        printf("\nx1 = %d",x1);
        printf("\nx2 = %d",x2);
    }

    return 0;
}