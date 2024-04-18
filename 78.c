#include <stdio.h>

int fact(int n);

int main(){

    int number;

    printf("Please enter the number for calculation factorial: ");
    scanf("%d",&number);

    printf("%d! = %d",number,fact(number));

    return 0;
}

int fact(int n){
    return (n)? n*fact(n-1): 1;
}