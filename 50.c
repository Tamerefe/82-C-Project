#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char str[10];

    printf("Enter a word: ");
    scanf("%c",&str);
 
    for (int i = 0; i < 10; i++){
        if( str[i] >= 'a' && str[i] <= 'z' && str[i] != 'i'){
            str[i] = str[i] - 32;
            printf("%s",str[i]);
        }
    }
    printf("%s",str[1]);
 
    return 0;
}
// FIX ITT
