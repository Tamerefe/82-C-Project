#include <stdio.h>

int main(){

    char name[100],surname[100],add[100];
    int i = 0,j = 0;

    printf("Please enter a name: ");
    scanf("%s",&name);
    printf("Please enter a surname: ");
    scanf("%s",&surname);

    while (name[i] != '\0') {
        add[j] = name[i];
        i++;
        j++;
    }

    i = 0;

    while (surname[i] != '\0') {
        add[j] = surname[i];
        i++;
        j++;
    }

    printf("%s",add);

    return 0;
}