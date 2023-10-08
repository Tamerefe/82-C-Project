#include <stdio.h>

int main() {

    int i;

    i += 1;
    printf("First One: %d \n",i);
    i -= 1;
    i++;
    printf("Second One: %d \n",i);
    i--;
    printf("Third One: %d \n",i);

    int a = 10, j = 5, z = 8, k;

    k = a++ + j*8 - 4/2 * --z;

    printf("%d %d %d %d \n",a,j,k,z);

    if(k > 30){
        printf("Try to write something");
    }

    // 
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