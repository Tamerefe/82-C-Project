#include <stdio.h>

int main(){

    int nm,ttl = 1;
    printf("Enter a number: ");
    scanf("%d",&nm);

    for (int n = 1; n <= nm; n++){

        printf("%d ",n);
        if (n != nm){
            printf("* ");
        }

        ttl *= n;

    }
    printf("= %d",ttl);

    return 0;
}