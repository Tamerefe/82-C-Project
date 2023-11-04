#include <stdio.h>
#include <math.h>
 
int main(){

    int a[10],n,i;

    printf("Enter the number to convert: ");    
    scanf("%d",&n);    

    for(i = 0 ; n > 0; i++){    
        
        a[i] = n % 2;
        n /= 2;    

    }   

    printf("\nBinary of Given Number is = ");    

    for(i -= 1 ; i >= 0; i--){   

        printf("%d",a[i]);   

    }  

    return 0;  
}  