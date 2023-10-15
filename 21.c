#include <stdio.h>

int main(){

    printf("Married with children program\n");

    char mrd,gnd,ys;
    int chd,age;

    printf("Are you married? (y or n): ");
    scanf("%c",&mrd);

    switch (mrd){
        case 'y':
        case 'Y':
            printf("Do you have children? (if you say yes how many): ");
            scanf("%d",&chd);
            if (chd > 2){
                printf("You have a big family");
            }else{
                printf("You have a small family");
            }
            break;

        case 'n':
        case 'N':
            printf("It means you are not married, what is your gender? (m or w): ");
            scanf(" %c",&gnd);

            if(gnd == 'm' || gnd == 'M'){
                printf("I understand, good luck in your life");
            }else if(gnd == 'w' || gnd == 'W'){
                printf("So can I know your age? ");
                scanf("%d",&age);
                if(age <= 40){
                    printf("Do you wanna date with me? (y or n): ");
                    scanf(" %c",&ys);
                    switch (ys)
                    {
                    case 'y':
                    case 'Y':
                        printf("(xx xxx xxx xx xx) That's my number you can text me");
                        break;
                    case 'n':
                    case 'N':
                        printf("Ok, Take care of yourself");
                        break;
                    default:
                        break;
                    }
                } else if(age > 40){
                    printf("Sorry about that but you are too old for me");
                } else{
                    printf("Ok");
                }
            } else {
                printf("Ok, I understand");
            }
            break;
        
        default:
            break;
    }

    return 0;
}