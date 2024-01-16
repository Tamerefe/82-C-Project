#include <stdio.h>
#include <string.h>

int main(void){

    char klm[100];

    printf("Please a enter a word: ");
    scanf("%s",&klm);

    int lng = strlen(klm);

    printf("Your word is %s and total word count is %d",klm,lng);

    return 0;
}