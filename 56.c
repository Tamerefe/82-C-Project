#include <stdio.h>
#include <string.h>
 
void main(){
    char word[100],txt;
    int len;

    printf("\n Please enter a text : " );
    scanf("%s",&word);

    len = strlen(word);

    for(int i = 0 ; i < len - 1; i++) {
        for(int k = i + 1 ; k < len; k++) {
            if(word[i] > word[k]) {
                txt = word[i];
                word[i] = word[k];
                word[k] = txt;
            }
        }
    }

    printf("\nAlphabetic order of letters %s",word);
}