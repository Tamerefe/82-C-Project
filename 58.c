#include <stdio.h>
#include <ctype.h>

int main(void) {
    int i = 0;
    char word[50], chr;

    printf("Please enter a text: ");
    scanf("%s", word);

    while (word[i] != '\0') { 
        chr = word[i]; 
        printf("%c", toupper(chr));
        i++; 
    }

    return 0;
}