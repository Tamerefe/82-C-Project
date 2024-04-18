#include <stdio.h>

void checker(double* num);

int main(){

    double number;
    double* ptr;

    printf("Enter the number: ");
    scanf("%lf",&number);

    ptr = &number;

    checker(ptr);

    return 0;
}

void checker(double* num){

    if(num < 0){
        printf("%.2f is a negative number",*num);
    } else if(num > 0){
        printf("%.2f is a positive number",*num);
    } else {
        printf("%.2f is a 0 or idk",*num);
    }

}