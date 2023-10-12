#include <stdio.h>
#include <math.h>

int main() {

    float note;

    printf("CGPA Calculator\n");
    printf("Please enter a your CGPA (X.XX): ");
    scanf("%f",&note);

    if(4.00 == note){
        printf("Letter equivalent of grade point average is : A");
    }else if(4.00 > note && note > 3.70){
        printf("Letter equivalent of grade point average is : A-");
    }else if(3.70 >= note && note > 3.30){
        printf("Letter equivalent of grade point average is : B+");
    }else if(3.30 >= note && note > 3.00){
        printf("Letter equivalent of grade point average is : B");
    }else if(3.00 >= note && note > 2.70){
        printf("Letter equivalent of grade point average is : B-");
    }else if(2.70 >= note && note > 2.30){
        printf("Letter equivalent of grade point average is : C+");
    }else if(2.30 >= note && note > 2.00){
        printf("Letter equivalent of grade point average is : C");
    }else if(2.00 >= note && note > 1.70){
        printf("Letter equivalent of grade point average is : C-");
    }else if(1.70 >= note && note > 1.30){
        printf("Letter equivalent of grade point average is : D+");
    }else if(1.30 >= note && note > 1.00){
        printf("Letter equivalent of grade point average is : D");
    }else if(1.00 >= note && note > 0.00){
        printf("Letter equivalent of grade point average is : F");
    }
    
    return 0;
}