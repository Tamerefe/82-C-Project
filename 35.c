#include <stdio.h>

int main () {

    int num,n,nt,ng,i,mi = 0;

    printf("Program that writes the first 10 prime numbers after the number written \n");

    printf("Please enter a number for check the 10 prime number: ");
    scanf("%d",&num);
    
    for (ng = num; ng <= num*20; ng++){
        if(ng % 2 == 0 || ng % 3 == 0 || ng % 5 == 0 || ng % 7 == 0){
            if (ng == 2 || ng == 3 || ng == 5 || ng == 7){
                printf("%d, ",ng);
                mi++;
            }
        } else{
            printf("%d, ",ng);
            mi++;
        }
        if (mi == 10){
            break;
        }
        
    }

      
 

   return 0;
}