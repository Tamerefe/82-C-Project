#include <stdio.h>

int main() {

    int nmb,num[5];

    printf("Please a enter a number: ");
    scanf("%d",&nmb);

    num[0] = nmb/1000;
    num[1] = nmb%1000;
    num[2] = nmb/1000%1000;
    num[3] = num[0]/1000;

    printf("%d.%d.%d",num[3],num[2],num[1]);

    return 0;
}