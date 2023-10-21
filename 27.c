#include <stdio.h>

int main () {

   int num;

   printf("Please enter a negative number: ");
   scanf("%d",&num);

   while (num >= 0){
      printf("I say 'Please enter a negative number:' ");
      scanf("%d",&num);
   }
   
 

   return 0;
}