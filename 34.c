#include <stdio.h>

int main() {

   int nmb,frst,scnd,thrd,frth;

   printf("Program that prints the entered number in reverse\n");
   printf("Please a enter a number (max: 9999): ");
   scanf("%d",&nmb);

   if (nmb < 100){
    frst = nmb/10;
    scnd = nmb%10;
    printf("%d%d",scnd,frst);
   } else if (nmb >= 100 && nmb < 1000){
    frst = nmb/100;
    scnd = nmb%10;
    thrd = nmb/10%10;
    printf("%d%d%d",scnd,thrd,frst);
   } else if (nmb >= 1000 && nmb < 10000){
    frst = nmb/100%10;
    scnd = nmb%10;
    thrd = nmb/10%10;
    frth = nmb/1000;
    printf("%d%d%d%d",scnd,thrd,frst,frth);
   } 
   
   return 0;
}