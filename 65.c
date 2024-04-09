#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char *name = (char *)malloc(10 * sizeof(char));
    int n = 0;

    printf("Application for making initials capital letters\n");
    printf("Enter a word: ");
    fgets(name, sizeof(name), stdin);

    name[0] = toupper(name[0]);

    while (name[n] != '\0'){
        if (name[n] == ' '){
            n++;
            if (name[n] != '\0')
                name[n] = toupper(name[n]);
        }
        n++;
    }
    
    printf("The word you entered: %s\n", name);
    free(name);
    
    return 0;
}