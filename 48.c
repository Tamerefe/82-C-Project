#include <stdio.h>

int main(){

    int matrix[3][3],x = 0;

    for (int i = 0; i < 3; i++){

        for (int k = 0; k < 3; k++){

            printf("Enter a Matrix[%d][%d]: \n",i+1,k+1);
            scanf("%i",&matrix[i][k]);

        }
    }

    for (int l = 0; l < 3; l++){

        for (int m = 0; m < 3; m++){
            
            if (m != l){
                
                if (matrix[m][l] != matrix[l][m]){
                    x++;
                    break;
                }
            }
        }
    }
    
    if (x != 0){
        printf("Matrix not Symetric (%d)",x);
    }else{
        printf("Matrix Symetric");
    }
    
    

    return 0;
}