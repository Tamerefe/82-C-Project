#include <stdio.h>

void multip(int number){

    printf("\n1 x %d = %d",number,number);
    printf("\n2 x %d = %d",number,number*2);
    printf("\n3 x %d = %d",number,number*3);
    printf("\n4 x %d = %d",number,number*4);
    printf("\n5 x %d = %d",number,number*5);
    printf("\n6 x %d = %d",number,number*6);
    printf("\n7 x %d = %d",number,number*7);
    printf("\n8 x %d = %d",number,number*8);
    printf("\n9 x %d = %d",number,number*9);
}

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Multiplication Table:");
    multip(num);

   return 0;
}