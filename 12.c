#include <stdio.h>

int main() {

    int agecal,electioncal,gncl;

    printf("Can you vote last election");

    printf("Please enter a election year (XXXX): ");
    scanf("%d",&electioncal);
    printf("Enter a your age: ");
    scanf("%d",&agecal);

    if (agecal >= 18){
        printf("You can vote in the %d election",electioncal);
    }else{
        gncl = electioncal - (2023 - agecal);
        if (gncl >= 18){
            printf("You can vote in the %d election",electioncal);
        }
        printf("You can't vote in the %d election",electioncal);
    }

    return 0;
}