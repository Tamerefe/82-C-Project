#include <stdio.h>

int main(){

    float height=1,rsltt;
    int i = 0,weight=1,rslt;

    printf("Calculate students weight and height\n");
    printf("For exit press 0\n");

    while (2 > 1){
        
        i++;
        printf("%d. What is the student's weight: ",i);
        scanf("%d",&weight);
        if( weight == 0){
            break;
        }
        printf("%d. What is the student's height: ",i);
        scanf("%f",&height);
        if(height == 0.00){
            break;
        }

        
        rsltt += height;
        rslt += weight;      
    }
    i -= 1;
    printf("\nAverage height and weight of %d students",i);
    printf("\nHeight: %.2f",rsltt/(float)i);
    printf("\nWeight: %d",rslt/i);

    


    return 0;
}