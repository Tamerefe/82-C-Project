#include <stdio.h>

void factorial(int number, int total);


int main(){

    int nm,ttl = 1;
    printf("Enter a number: ");
    scanf("%d",&nm);

    factorial(nm,ttl);

    return 0;
}

void factorial(int number, int total){

    for (int n = 1; n <= number; n++){

        printf("%d ",n);
        if (n != number){
            printf("* ");
        }
    
        total *= n;

    }
    printf("= %d",total);
}