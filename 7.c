#include <stdio.h>

int main() {

    float road, hour, min, ttl,ndd;

    printf("Write the kilometer of the going road: ");
    scanf("%f", &road);

    printf("How many hour of the going road: ");
    scanf("%f", &hour);

    printf("How many minute of the going road: ");
    scanf("%f", &min);

    ttl = hour + (min/60);

    ndd = road/ttl;

    printf("The speed required to exist within this time : %.2f km/h \n",ndd);

    return 0;
}