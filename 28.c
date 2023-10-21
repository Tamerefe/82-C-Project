#include <stdio.h>
#include <math.h>

int main () {

    int num,powr,rslt;

    printf("Power of number program");

    printf("\nPlease enter a number: ");
    scanf("%d",&num);
    printf("Please enter a power: ");
    scanf("%d",&powr);

    rslt = pow(num,powr);

    printf("Result: %d",rslt);

   return 0;
}