#include <stdio.h>

int main() {
  int myNum1;
  int myNum2;

  printf("Type a first number: "); 

  scanf("%d", &myNum1);

  printf("Type a first number: "); 

  scanf("%d", &myNum2);

  int myNum3 = myNum1 + myNum2;

  printf("Sum of the your number: %d",myNum3);

  return 0;
}