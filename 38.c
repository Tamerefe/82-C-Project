#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

   srand(time(0));
   int gues, rndm = rand()%100;
   printf("%d",rndm);

    do{
        printf("Enter a number: ");
        scanf("%d",&gues);
    }
    while (gues != rndm);
    
    printf("\nCongratulations, (%d) the number you guessed was correct",rndm);

   
   return 0;
}