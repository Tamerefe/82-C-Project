#include <stdio.h>

int main() {

    char chrc;

    printf("Please give me a letter: ");
    scanf("%c",&chrc);

    switch (chrc){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'O':
    case 'U':
    case 'I':
    case 'A':
    case 'E':
        printf("The given letter is a vowel");
        break;
    
    default:
        printf("The given letter is a consonant");
        break;
    }
    
    return 0;
}