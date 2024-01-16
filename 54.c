#include <stdio.h>

int main(void) {

    char str[100], str2;
    int count = 0;

    printf("Please enter a word: ");
    scanf("%s",str);

    printf("Please enter a character: ");
    scanf(" %c", &str2);

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == str2) {
            count++;
        }
    }

    printf("Total occurrences: %d\n", count);

    return 0;
}