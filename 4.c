#include <stdio.h>

int main() {

    printf("Welcome the programm of area and perimeter of square\n");

    int mySquare;

    printf("Please write a one side of square: "); 

    scanf("%d", &mySquare);

    int prw = mySquare*mySquare;

    int prw4 = mySquare*4;

    printf("Your square \n area: %d \n perimeter: %d",prw,prw4);


    return 0;
}