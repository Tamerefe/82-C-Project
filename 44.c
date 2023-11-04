#include <stdio.h>
#include <math.h>

int adding(int num1,int num2){

    return num1 + num2;
}

int decrease(int num1,int num2){

    return num1 - num2;
}

int divide(int num1,int num2){

    return num1 / num2;
}

int multiplication(int num1,int num2){

    return num1 * num2;
}

int remaind(int num1,int num2){

    return num1 % num2; 
}

 
int main(){

    int nmb1,nmb2;
    char chr;

    printf("Simple functional Calculator");
    scanf("%c",chr);

    switch (chr){

        case '+':
            printf("%d + %d = %d\n",nmb1,nmb2,adding(nmb1,nmb2));
            break;
        case '-':
            printf("%d - %d = %d\n",nmb1,nmb2,decrease(nmb1,nmb2));
            break;
        case '/':
            printf("%d / %d = %d\n",nmb1,nmb2,divide(nmb1,nmb2));
            break;
        case '*':
            printf("%d * %d = %d\n",nmb1,nmb2,multiplication(nmb1,nmb2));
            break;
        case '%':
            printf("%d \% %d = %d\n",nmb1,nmb2,remaind(nmb1,nmb2));
            break;
        
        default:
            break;
    }

    return 0;
}