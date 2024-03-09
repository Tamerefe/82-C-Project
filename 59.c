#include <stdio.h>

void binaryConverter(int num);

int main(){

    int number;

    printf("Please a enter a number: ");
    scanf("%d",&number);

    binaryConverter(number);

    return 0;
}

void binaryConverter(int num){

    int i,nmb[10];

    for (i = 0; 0 < num; i++) {
        nmb[i] = num%2;
        num /= 2;
    }
    
    printf("Binary Version: ");

    for (i -= 1; i >= 0; i--) {
        printf("%d",nmb[i]);
    }

}
