#include <stdio.h>

int main(){

    int age;

    printf("Please Write Your Age: ");
    scanf("%d",&age);

    if(age >= 1 && age <= 4){
        printf("Infancy Period");
    }else if(age > 4 && age <= 14){
        printf("Childhood Period");
    }else if(age > 14 && age <= 21){
        printf("Youth Period");
    }else if(age > 21 && age <= 35){
        printf("Middle age Period");
    }else if(age > 35 && age <= 60){
        printf("Maturity Period");
    }else if(age > 60 && age <= 100){
        printf("Senile Period");
    }else{
        printf("You're either very lucky, or you're giving the wrong age.");
    }

    return 0;
}