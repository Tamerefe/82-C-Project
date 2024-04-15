#include <stdio.h>

void power(int numb);

int main(){

    power(7);

    return 0;
}

void power(int numb){
    int total = 0 ;

    for (size_t i = 1; i <= numb; i++){
        printf("%d^2 = %d\n",i,i*i);
        total += i*i;
    }
    printf("Total = %d",total);
}