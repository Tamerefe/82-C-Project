#include <stdio.h>

int main () {

   int num,num2,n,nt,ng,i;

   printf("Find The Prime Number Program 2 Number \n");

   printf("Please enter a 2 number for check the between prime number or not: ");
   scanf("%d %d",&num,&num2);

   if(num > num2){
      printf("List of prime numbers between %d and %d:\n",num2,num);
      for (ng = num2; ng <= num; ng++){
         if(ng % 2 == 0 || ng % 3 == 0 || ng % 5 == 0 || ng % 7 == 0){
            if (ng == 2 || ng == 3 || ng == 5 || ng == 7){
               printf("%d, ",ng);
            }
         } else{
            printf("%d, ",ng);
         }
      }
   }
   else if(num2 > num){
      printf("List of prime numbers between %d and %d:\n",num,num2);
      for (ng = num; ng <= num2; ng++){
         if(ng % 2 == 0 || ng % 3 == 0 || ng % 5 == 0 || ng % 7 == 0){
            if (ng == 2 || ng == 3 || ng == 5 || ng == 7){
               printf("%d, ",ng);
            }
         }else{
            printf("%d, ",ng);
         }
      }
   }
      
 

   return 0;
}