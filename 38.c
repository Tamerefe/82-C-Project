#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

   srand(time(0));
   int gues, rndm = rand()%100;

   printf("Guessing Game (0 to 100)\n");
   printf("Enter a number: ");
   scanf("%d",&gues);

    while (gues != rndm){
        
        printf("Fault!\n");
        printf("Enter a number: ");
        scanf("%d",&gues);
    }
    printf("\nCongratulations, (%d) the number you guessed was correct",rndm);

   
   return 0;
}