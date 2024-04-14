#include <stdio.h>

int main(){

    int num;
    int *ptr = &num;

    printf("Please enter a number: ");
    scanf("%d",&num);

    printf("\nWith Number");
    printf("\n Value of number : %d",num);
    printf("\n Address of number : %p",&num);

    printf("\nWith Pointer");
    printf("\n Value of number : %d",*ptr);
    printf("\n Address of number : %p",ptr);

    return 0;
}