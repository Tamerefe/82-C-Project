#include <stdio.h>

int main(){

    int num,num2,ttls,ttld;

    int *ptr = &num;
    int *ptr2 = &num2;

    printf("Sum and Dif of the 2 numbers\n");
    printf("Please give me first number: ");
    scanf("%d",&num);
    printf("Please give me first number: ");
    scanf("%d",&num2);

    ttls = *ptr + *ptr2;
    if (*ptr > *ptr2){
        ttld = *ptr - *ptr2;
    } else{
        ttld = *ptr2 - *ptr;
    }
    
    printf("\nSum: %d \nDif: %d",ttls,ttld);

    return 0;
}