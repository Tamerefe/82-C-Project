#include <stdio.h>
#include <string.h>

void main(){
    char word[50],txt[50];

    printf("Please enter a text: ");
    scanf("%s",&word);

    int len = strlen(word);
    int k = len;

    for(int i = 0 ; i <= len; i++) {
        txt[i] = word[k-1];
        k--;
    }

    printf("\nReverse order of letters %s",txt);
}