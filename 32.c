#include <stdio.h>

int main() {

    int num,op1,op2,ttl;

    printf("Select first number: ");
    scanf("%d",&op1);
    printf("Select second number: ");
    scanf("%d",&op2);

    printf("\n1) + 2) - \n3) * 4) / \nPlease select number: ");
    scanf("%d",&num);

    if (num == 1){
        ttl = op1 + op2;
        printf("%d",ttl);
    }else if (num == 2){
        ttl = op1 - op2;
        printf("%d",ttl);
    }else if (num == 3){
        ttl = op1 * op2;
        printf("%d",ttl);
    }else if (num == 4){
        ttl = op1 / op2;
        printf("%d",ttl);
    }else {
        printf("Go by your home");
    }
    
   return 0;
}