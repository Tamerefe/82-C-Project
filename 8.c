#include <stdio.h>

int main() {

    int agem,agey,aged,ttlm,ttlw,ttld,ttlh,ttlmi,ttls;

    printf("Calculator of age operator \n");

    printf("Please write your age in years: ");
    scanf("%d",&agey);

    printf("Please write your age in month: ");
    scanf("%d",&agem);

    if (agem > 12){
        printf("\nFault!\nPlease write original your age in month: ");
        scanf("%d",&agem);
    }

    printf("Please write your age in day: ");
    scanf("%d",&aged);

    if (aged > 30){
        printf("\nFault!\nPlease write original your age in day: ");
        scanf("%d",&agem);
    }

    ttlm = (agey*12) + agem + aged/30;
    ttlw = (agey*52) + (agem*4) + (agem*2 + aged)/7;
    ttld = (agey*365) + (agem*30) + aged;
    ttlh = ttld*24;
    ttlmi = ttlh*60;
    ttls = ttlmi*60;

    printf("\nYour Age in Monthly: %d month\n",ttlm);
    printf("Your Age in Weekly: %d week\n",ttlw);
    printf("Your Age in Daily: %d day\n",ttld);
    printf("Your Age in Hours: %d hour\n",ttlh);
    printf("Your Age in Minutes: %d minute\n",ttlmi);
    printf("Your Age in Second: %d second\n",ttls);


    return 0;
}