#include <stdio.h>
#include <stdlib.h>

struct time{
    int *hour;
    int *minute;
    int *second;
};

int main(){

    struct time zone;
    int totalzH = 0,totalzM = 0,totalzS = 0, i = 0;
    char yorn;

    zone.hour = (int*)malloc(sizeof(int));
    zone.minute = (int*)malloc(sizeof(int));
    zone.second = (int*)malloc(sizeof(int));

    do {
        printf("Please Enter a %d. Hour: ",i+1);
        scanf("%d",&zone.hour[i]);
        printf("Please Enter a %d. Minute: ",i+1);
        scanf("%d",&zone.minute[i]);
        printf("Please Enter a %d. Second: ",i+1);
        scanf("%d",&zone.second[i]);    
        
        if (1 <= i){
            printf("Do you wanna Continue? (Y or N)");
            scanf(" %c",&yorn);
            if (yorn == 'n' || yorn == 'N'){
            break;
            }
        }
        
        i++;
        zone.hour = (int*)realloc(zone.hour, (i + 1) * sizeof(int));
        zone.minute = (int*)realloc(zone.minute, (i + 1) * sizeof(int));
        zone.second = (int*)realloc(zone.second, (i + 1) * sizeof(int));
    } while(1);

    for (size_t l = 0; l <= i; l++) {
        totalzH += zone.hour[l];
        totalzM += zone.minute[l];
        totalzS += zone.second[l];
    }

    if (totalzS >= 60){
        totalzM++;
        totalzS -= 60;
    }
    if (totalzM >= 60){
        totalzH++;
        totalzM -= 60;
    }

    printf("Total\n = Hour: %d \n = Minute: %d \n = Second: %d",totalzH, totalzM, totalzS);

    free(zone.hour);
    free(zone.minute);
    free(zone.second);

    return 0;
}