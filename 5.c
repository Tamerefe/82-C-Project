#include <stdio.h>

int main() {

    printf("Welcome the programm of area and perimeter of rectangle\n");

    int myRectangle;
    int myRectangle2;

    printf("Please write a one side of rectangle?: "); 

    scanf("%d", &myRectangle);

    printf("Please write a height of the rectangle?: "); 

    scanf("%d", &myRectangle2);

    int prwh = myRectangle*myRectangle2;
    int prws = (myRectangle + myRectangle2)*2;

    printf("Your rectangle \nArea: %d \nPerimeter: %d",prwh,prws);

    return 0;
}