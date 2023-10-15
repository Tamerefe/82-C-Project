#include <stdio.h>

int main(){

    double num1,num3;
    char ope;

    printf("Please Write a operator (+ - / *): ");
    scanf(" %c",&ope);

    printf("Please give me a 2 number .. .. : ");
    scanf("%lf %lf",&num1,&num3);

    switch (ope){
        case '+':
            printf("%.2lf",num1 + num3);
            break;
        case '-':
            printf("%.2lf",num1 - num3);
            break;
        case '*':
            printf("%.2lf", num1 * num3);
            break;
        case '/':
            printf("%.2lf",num1 / num3);
            break;
        
        default:
            break;
    }


    return 0;
}