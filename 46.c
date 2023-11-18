#include <stdio.h>

int main(){

    int matrix[3][3],matrix2[3][3];

    for (int i = 0; i < 3; i++){

        for (int k = 0; k < 3; k++){

            printf("Enter a Matrix[%d][%d]: \n",i+1,k+1);
            scanf("%i",&matrix[i][k]);

            printf("Enter a Second Matrix[%d][%d]: \n",i+1,k+1);
            scanf("%i",&matrix2[i][k]);

        }
    }

    for (int l = 0; l < 3; l++){

        printf("\n");

        for (int m = 0; m < 3; m++){
            
            printf("\t%i",matrix[l][m]+matrix2[l][m]);

        }
    }
    

    return 0;
}