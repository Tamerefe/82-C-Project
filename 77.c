#include <stdio.h>
#include <stdlib.h>
 
#define max 20

int number[max];
int i = 0 ;
 
void ordernumber();
void print();
// int findtotal();
// float findaverage(int total, int i);

int main(){

    // create a random numbers
    for (i = 0; i < max; i++){

        number[i] = rand();
    }

    ordernumber();
    print();

    return 0;
}

void ordernumber(){

    int temp;

    for (size_t i = 1; i < max; i++){
        if (number[i-1] > number[i]){
            temp = number[i-1];
            number[i-1] = number[i];
            number[i] = temp;
        } else {
            for (size_t i = 0; i < max; i++){
                if (number[i-1] > number[i]){
                temp = number[i-1];
                number[i-1] = number[i];
                number[i] = temp;
                }
            }
            
        }
    }

}

void print(){

    for (size_t i = 0; i < max; i++){
        printf("%d. %d \n",i+1,number[i]);
    }

}