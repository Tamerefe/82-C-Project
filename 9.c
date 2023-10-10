#include <stdio.h>

int main() {

    int numboe;

    printf("Calculator of odd and even operator \n");

    printf("Please write number: ");
    scanf("%d",&numboe);

    if(numboe % 2 == 0){
        printf("%d is Even\n",numboe);
    }else{
        printf("%d is Odd\n",numboe);
    }

    return 0;
}