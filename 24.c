#include <stdio.h>

int main(){

    for (int n = 0; n <= 50; n++){

        if (n % 2 == 0){
            printf("%d is even\n",n);
        } else{
            printf("%d is odd\n",n);
        }

    }

    return 0;
}