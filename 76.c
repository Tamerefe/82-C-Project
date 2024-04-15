#include <stdio.h>      
#include <stdlib.h> 

int main(){

    for (size_t i = 0; i < 5; i++){

        int a = rand();
        int *p = &a;

        printf("%d - Value : %6d",i+1,*p);
        printf(" | Address : %16p\n",p);
    }
      
    return 0;
}