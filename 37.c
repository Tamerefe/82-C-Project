#include <stdio.h>

int main () {

    int nmb,
    smlt = 1000000000,
    lrgt=0,
    aver = 0,
    n,i;
    float averflot;


    printf("How many want to enter: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&nmb);

        if(lrgt < nmb){
            lrgt = nmb;
        }
        if(smlt > nmb){
            smlt = nmb;
        }
        aver += nmb;
    }
    averflot = (float)aver / (float)n;
    printf("\nBigger Number is %d",lrgt);
    printf("\nSmallest Number is %d",smlt);
    printf("\nAverage Number is %.2f",averflot);
    
    return 0;
}