#include <stdio.h>

int main(){

    int num = 0,num25=25,i;
    char tbcount;

    printf("Counting towards or backwards from 25 (one by one)");
    printf("\n\nPlease select toward or backward count which way \n(Please press t or b): ");

    scanf("%c",&tbcount);
    switch (tbcount)
    {
    case 't':
    case 'T':
        printf("Okay, let's count from 0 to 25 one by one.");
        for (i = 0; i <= 25; i++)
        {
            printf("\nYou are now at number %d, write the next number: ",num);
            scanf("%d",&num);

            if(i + 1 != num){
                break;
            } 
        }
        
        break;

    case 'b':
    case 'B':
        printf("Okay, let's count from 25 to 0 one by one.");
        for (i = 25; i >= 0; i--)
        {
            printf("\nYou are now at number %d, write the next number: ",num25);
            scanf("%d",&num25);

            if(i - 1 != num25){
                break;
            } 
        }
        
        break;
    
    default:
        printf("Maybe next time see you soon");
        break;
    }






    return 0;
}