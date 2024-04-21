#include <stdio.h>
#include <math.h>
 
int main(void){

    double pi = 0.0;
    double error = 0.0001;
    double pi0 = 3.14159265358979323;
    double i, x;

    for (i = 1.0, x = 1.0; fabs(pi - pi0) > error; i += 2.0, x = -1 * x){
        pi += x * 4.0 / i;
    }

    printf("%1.17f\n", pi);
    return 0;
}