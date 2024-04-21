#include <stdio.h>
#include <string.h>

int main() {
    char number[20];
    int len;

    printf("Enter the number: ");
    scanf("%s", number);

    len = strlen(number);

    for (size_t i = 0; i < len/2; i++) {
        if (number[i] != number[len - i - 1]) {
            printf("%s is not a palindrome number", number);
            return 1;
        }
    }

    printf("%s is a palindrome number", number);

    return 0;
}