#include <stdio.h>
 
int main(){
    int numbers[10];
    int counter = 0;
    int num = 0;

    for(counter=1 ; counter <= 10; counter++){
        printf("%i. numbers: ",counter);
        scanf("%i",&numbers[counter]);
    }

    printf("\nEven numbers: ");

    for(counter = 0; counter<10; counter++){
        if (numbers[counter]%2 == 0 ){
            printf("%i ",numbers[counter]);
        }
    }

    printf("\nOdd numbers: ");

    for(counter = 0; counter<10; counter++){
        if( numbers[counter]%2 != 0 ){
            printf("%i ",numbers[counter]);
        }
    }

    printf("\nPrime numbers: ");

    for(counter = 0; counter<10; counter++){


        for( num = 2; num < numbers[counter] ; num++ ){
            if( numbers[counter]%num == 0 ){
                break;
            }else{
                printf("%i ",numbers[counter]);
                break;
            }
        }
    }


    return 0;
}