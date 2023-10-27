#include <stdio.h>

int main () {

    int stdn,cntr,clc,tlt = 0,pnt[50];

    printf("How many students' grades will you calculate: ");
    scanf("%d",&stdn);

    for (cntr = 0; cntr < stdn; cntr++){
        printf("%i. Students point : ",cntr+1);
        scanf("%i",&pnt[cntr]);
        tlt += pnt[cntr];
        clc = tlt/stdn;
    }
    printf("\nTotal Score: %d",tlt);
    printf("\nOverall Average: %d",clc);
    

    return 0;
}