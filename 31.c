#include <stdio.h>

int main() {

    printf("The multiplication table\n\n");

    for (size_t i = 0; i < 10; i++){
        for (size_t n = 0; n < 10; n++)
        {
            if (i*n < 10)
            {
                printf("%d * %d = %d  | ",i,n,i*n);
            } else{
                printf("%d * %d = %d | ",i,n,i*n);
            }     
        }
        printf("\n");
    }
    
    
   return 0;
}