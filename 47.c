#include <stdio.h>

int main(){

    int matrix[4][4];

    for (int i = 0; i < 4; i++){

        for (int k = 0; k < 4; k++){
            printf("Enter a Matrix[%d][%d]: \n",i+1,k+1);
            scanf("%i",&matrix[i][k]);

        }
    }

    for (int l = 0; l < 4; l++){

        printf("\n");

        for (int m = 0; m < 4; m++){
            
            printf("\t%i",matrix[l][m]);

        }
    }
    

    return 0;
}