#include <stdio.h>

int main() {

   int nmb,scnd,thr2,scnd2,thr,tlt;

   printf("The sum of the digits in an entered number\n");
   printf("Please a enter a number (max: 999): ");
   scanf("%d",&nmb);

   if (nmb < 100){
      scnd = nmb%10;
      thr = nmb/10;
      tlt = thr + scnd;
      printf("%d",tlt);
   } else if (nmb >= 100 && nmb < 1000){
      scnd2 = nmb/10%10;
      scnd = nmb%10;
      thr2 = nmb/100;
      tlt = scnd + thr2 + scnd2;
      printf("%d",tlt);
   } 
   
   return 0;
}