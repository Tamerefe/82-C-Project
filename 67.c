#include <stdio.h>

struct time{
    int hour; //dinnamik hale getir
    int minute;
    int second;
};

int main(){

    struct time zone;
    int i = 0, totalzH = 0,totalzM = 0,totalzS = 0;

    while (zone.hour[i] == '0/' || zone.minute[i] == '0/' || zone.second[i] == '0/') {
        printf("Please Enter a %d. Hour: ",i+1);
        scanf("%d",&zone.hour[i]);
        printf("Please Enter a %d. Hour: ",i+1);
        scanf("%d",&zone.minute[i]);
        printf("Please Enter a %d. Hour: ",i+1);
        scanf("%d",&zone.second[i]);
        i++;
    }

    for (size_t l = 0; l < i; l++) {
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

    printf("Total\n = Hour: %d \n = Minute: %d \n = Second: %d")


    return 0;
}