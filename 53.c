#include <stdio.h>

int main(void){

    char str[100];
    int count = 0;

    printf("Please a enter a word: ");
    scanf("%s",&str);

    for (size_t i = 0; str[i] != '\0'; i++){

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }

    printf("Total vowels: %d",count);
    
    return 0;
}