#include <stdio.h>
 
int main(){

    int gvnm, knm =1, numbers[10] = {4,11,15,36,55,83,42,99,18,10};
    char ch = 'F';

    printf("Finding one of the 10 numbers in the list\n");
    printf("Enter a number: ");
    scanf("%d",&gvnm);
    

    for (size_t i = 0; i < 10; i++){
        
        if(gvnm == numbers[i]){
            printf("Number %d was found in the %d. place of the list",numbers[i],knm);
            ch = 'T';
            break;
        }
        knm++;
    }

    if(ch == 'F'){
        printf("%d number is not valid.",gvnm);
    }
    
    
    return 0;
}