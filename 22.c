#include <stdio.h>

int main(){

    int num,n;


    printf("Find The Prime Number Program \n");

    printf("Please enter a number for check the prime number or not: ");
    scanf("%d",&num);

    for(n=2; n <= num; n++){
        if(num % n == 0){
            if(num == n){
                printf("%d number is prime number",num);
                break;
            }else{
                printf("%d number is not prime number",num);
                break;
            }
        }
    }

    return 0;
}