#include <stdio.h>

int main() {

    // Need A Path for Fixed

    int leapyrl;

    printf("Leap Year Or Not\n");

    printf("Please enter a year (XXXX): ");
    scanf("%d",&leapyrl);

    if(leapyrl % 4 == 0){
        if(leapyrl % 400 == 0 && leapyrl % 100 == 0){
            printf("The year %d isn't a leap year",leapyrl);
        }else{
            printf("The year %d is a leap year",leapyrl);
        }
    } else{
        printf("The year %d isn't a leap year",leapyrl);
    }
    
    return 0;
}