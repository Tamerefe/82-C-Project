#include <stdio.h>

#define num 5

void ordernumber(int numb[]);

int main(){

    int number[num];

    for (size_t i = 0; i < num; i++){
        printf("Please enter the %d. number: ",i+1);
        scanf("%d",&number[i]);
    }
    ordernumber(number);

    return 0;
}

void ordernumber(int numb[]){

    int temp;

    for (size_t i = 0; i < num - 1; i++) {
        for (size_t j = 0; j < num - 1 - i; j++) {
            if (numb[j] > numb[j + 1]) {
                temp = numb[j];
                numb[j] = numb[j + 1];
                numb[j + 1] = temp;
            }
        }
    }
    for (size_t i = 0; i < num-1; i++){
        printf("%d > ",numb[i]);
    } printf("%d",numb[num-1]);
    
}