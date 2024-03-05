#include <stdio.h>
#include <string.h>

int main(){

    int number,digits = 1;

    printf("Please a enter number: ");
    scanf("%d",&number);

    while (number>=10){
        number/=10;
        digits++;
    }

    printf("\n%d",digits);

    return 0;
}