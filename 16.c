#include<stdio.h>

int main(){

    int weekday;

    printf("Please enter the number of your current day of the week: ");
    scanf("%d",&weekday);

    switch (weekday)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
        break;
    }

    // char weekday[10];
 
    // printf("Please enter a current day name: ");
 
    // scanf("%s",&weekday[10]);
    
    // switch (weekday[10]){
    // case 'Monday':
    // case 'monday':
    //     printf("First (1) day of the week");
    //     break;
    // case 'Tuesday':
    // case 'tuesday':
    //     printf("Second (2) day of the week");
    //     break;
    // case 'Wednesday':
    // case 'wednesday':
    //     printf("Third (3) day of the week");
    //     break;
    // case 'Thursday':
    // case 'thursday':
    //     printf("Fourth (4) day of the week");
    //     break;
    // case 'Friday':
    // case 'friday':
    //     printf("Fifth (5) day of the week");
    //     break;
    // case 'Saturday':
    // case 'saturday':
    //     printf("Sixth (6) day of the week");
    //     break;
    // case 'Sunday':
    // case 'sunday':
    //     printf("Seventh (7) day of the week");
    //     break;
    
    // default:
    //     break;
    // }
    
    return 0;
}