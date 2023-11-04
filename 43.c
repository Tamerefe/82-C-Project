#include <stdio.h>
#include <math.h>
 
int main(){
   
    double course, lab, midterm, final,totalGPA, highGPA = 0, lowGPA = 1000;

    for (int i = 1; i <= 30; i++){
        
        totalGPA = 0;

        for (int k = 1; k <= 5; k++){
            course = 0;
            
            printf("\nEnter the information of the %d. student's %d. course;\n",i,k);

            printf("Please enter a midterm note: ");
            scanf("%lf",&midterm);

            printf("Please enter a midterm note: ");
            scanf("%lf",&lab);

            printf("Please enter a midterm note: ");
            scanf("%lf",&final);

            course = 0.5*final + 0.4*midterm + 0.1*lab;

            // A = 4, B = 3, C = 2, D = 1, F = 0
            if (80 <= course && course <= 100){
                totalGPA += 4;
            } else if (70 <= course && course < 80){
                totalGPA += 3;
            } else if (60 <= course && course < 70){
                totalGPA += 2;
            } else if (50 <= course && course < 60){
                totalGPA += 1;
            } else{
                totalGPA += 0;
            }
        }

        totalGPA /= 5;

        printf("\n%d. student's GPA score: %.2f\n",i,totalGPA);

        if (lowGPA > totalGPA){
            lowGPA = totalGPA;
        } else if(highGPA < totalGPA){
            highGPA = totalGPA;
        }

    }

    printf("\nHighest GPA: %.2f \nLowest GPA: %.2f",highGPA,lowGPA);
    

    return 0;
}