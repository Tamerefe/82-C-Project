#include <stdio.h>

int main() {

   int val,val2,val3;

   printf("Please Write a your first value: ");
   scanf("%d",&val);
   printf("Please Write a your second value: ");
   scanf("%d",&val2);
   printf("Please Write a your third value: ");
   scanf("%d",&val3);


    if(val > val2){
        if(val > val3){
            printf("First Value Bigger Than Other Values");
        } else{
            printf("Third Value Bigger Than Other Values");
        }
    } else{
        if(val2 > val3){
            printf("Second Value Bigger Than Other Values");
        } else{
            printf("Third Value Bigger Than Other Values");
        }
    }
    
    return 0;
}